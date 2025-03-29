#ifndef BOJ_19000_SRC_19944_WHAT_IS_STANDARD_OF_NEWBIE_H_
#define BOJ_19000_SRC_19944_WHAT_IS_STANDARD_OF_NEWBIE_H_

#include <iostream>
#include <string>

class WhatIsStandardOfNewbie {
 public:
  void SetInputs() { std::cin >> n >> m; }

  void Calculate() {
    if (m <= 2) {
      result = "NEWBIE!";
    } else if (m <= n) {
      result = "OLDBIE!";
    } else {
      result = "TLE!";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  WhatIsStandardOfNewbie what_is_standard_of_newbie;
  what_is_standard_of_newbie.SetInputs();
  what_is_standard_of_newbie.Calculate();
  what_is_standard_of_newbie.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_19000_SRC_19944_WHAT_IS_STANDARD_OF_NEWBIE_H_
