#ifndef BOJ_20000_SRC_20494_SUSHI_H_
#define BOJ_20000_SRC_20494_SUSHI_H_

#include <iostream>
#include <string>
#include <vector>

class Sushi {
 public:
  void SetInputs() {
    std::cin >> n;
    inputs.resize(n);
    for (size_t i = 0; i < n; i++) {
      std::cin >> inputs[i];
    }
  }

  void Calculate() {
    result = 0;
    for (const auto& target : inputs) {
      result += target.size();
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::vector<std::string> inputs;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Sushi sushi;
  sushi.SetInputs();
  sushi.Calculate();
  sushi.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_20000_SRC_20494_SUSHI_H_
