#ifndef BOJ_15000_SRC_15820_WHY_WRONG_H_
#define BOJ_15000_SRC_15820_WHY_WRONG_H_

#include <iostream>
#include <string>
#include <vector>

class WhyWrong {
 public:
  void SetInputs() {
    size_t s1, s2;
    std::cin >> s1 >> s2;

    s1_numbers.resize(s1);
    if (s2 > 0) {
      s2_numbers.resize(s2);
    }

    for (size_t i = 0; i < s1; ++i) {
      std::pair<long long, long long> number;
      std::cin >> number.first >> number.second;

      s1_numbers[i] = number;
    }

    for (size_t i = 0; i < s2; ++i) {
      std::pair<long long, long long> number;
      std::cin >> number.first >> number.second;

      s2_numbers[i] = number;
    }
  }

  void Calculate() {
    result = "Wrong Answer";

    for (const auto& number : s1_numbers) {
      if (number.first != number.second) {
        return;
      }
    }

    result = "Why Wrong!!!";
    for (const auto& number : s2_numbers) {
      if (number.first != number.second) {
        return;
      }
    }

    result = "Accepted";
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::pair<long long, long long>> s1_numbers;
  std::vector<std::pair<long long, long long>> s2_numbers;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  WhyWrong why_wrong;
  why_wrong.SetInputs();
  why_wrong.Calculate();
  why_wrong.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15820_WHY_WRONG_H_
