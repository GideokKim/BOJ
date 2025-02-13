#ifndef BOJ_9000_SRC_9086_STRING_H_
#define BOJ_9000_SRC_9086_STRING_H_

#include <iostream>
#include <string>
#include <vector>

class String {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    result.resize(t, "");
  }

  void Calculate() {
    std::string input;
    for (size_t i = 0; i < result.size(); i++) {
      std::cin >> input;
      result[i] = std::string(1, input.front()) + std::string(1, input.back());
    }
  }

  void PrintResult() {
    for (const auto& answer : result) {
      std::cout << answer << std::endl;
    }
  }

 private:
  std::vector<std::string> result;
};

#ifdef BOJ_SUBMIT
int main() {
  String string;
  string.SetInputs();
  string.Calculate();
  string.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9086_STRING_H_
