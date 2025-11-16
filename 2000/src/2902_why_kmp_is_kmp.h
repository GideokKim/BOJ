#ifndef BOJ_2000_SRC_2902_WHY_KMP_IS_KMP_H_
#define BOJ_2000_SRC_2902_WHY_KMP_IS_KMP_H_

#include <iostream>
#include <string>

class WhyKmpIsKmp {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    result = "";
    for (auto target : input) {
      if ('A' <= target && target <= 'Z') {
        result += target;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  WhyKmpIsKmp why_kmp_is_kmp;
  why_kmp_is_kmp.SetInputs();
  why_kmp_is_kmp.Calculate();
  why_kmp_is_kmp.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2902_WHY_KMP_IS_KMP_H_
