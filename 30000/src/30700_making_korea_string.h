#ifndef BOJ_30000_SRC_30700_MAKING_KOREA_STRING_H_
#define BOJ_30000_SRC_30700_MAKING_KOREA_STRING_H_

#include <iostream>
#include <string>

class MakingKoreaString {
 public:
  void SetInputs() { std::cin >> s; }

  void Calculate() {
    result = 0;
    std::string korea = "KOREA";
    for (auto target : s) {
      if (target == korea[result % 5]) {
        ++result;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string s;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  MakingKoreaString making_korea_string;
  making_korea_string.SetInputs();
  making_korea_string.Calculate();
  making_korea_string.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30700_MAKING_KOREA_STRING_H_
