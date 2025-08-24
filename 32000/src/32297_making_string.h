#ifndef BOJ_32000_SRC_32297_MAKING_STRING_H_
#define BOJ_32000_SRC_32297_MAKING_STRING_H_

#include <iostream>
#include <string>

class MakingString {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n >> input;
  }

  void Calculate() {
    result = "NO";

    if (input.find("gori") != std::string::npos) {
      result = "YES";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  MakingString making_string;
  making_string.SetInputs();
  making_string.Calculate();
  making_string.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32297_MAKING_STRING_H_
