#ifndef BOJ_15000_SRC_15813_WHAT_IS_YOUR_NAME_SCORE_H_
#define BOJ_15000_SRC_15813_WHAT_IS_YOUR_NAME_SCORE_H_

#include <iostream>
#include <string>

class WhatIsYourNameScore {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n >> name;
  }

  void Calculate() {
    result = 0;
    for (auto target : name) {
      result += target - 'A' + 1;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string name;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  WhatIsYourNameScore what_is_your_name_score;
  what_is_your_name_score.SetInputs();
  what_is_your_name_score.Calculate();
  what_is_your_name_score.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15813_WHAT_IS_YOUR_NAME_SCORE_H_
