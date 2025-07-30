#ifndef BOJ_30000_SRC_30045_ZOAC_6_H_
#define BOJ_30000_SRC_30045_ZOAC_6_H_

#include <iostream>
#include <string>
#include <vector>

class Zoac6 {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;

    inputs.resize(n);
    for (auto& input : inputs) {
      std::cin >> input;
    }
  }

  void Calculate() {
    result = 0;
    for (auto& input : inputs) {
      if (input.find("01") != std::string::npos ||
          input.find("OI") != std::string::npos) {
        ++result;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::string> inputs;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Zoac6 zoac6;
  zoac6.SetInputs();
  zoac6.Calculate();
  zoac6.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30045_ZOAC_6_H_
