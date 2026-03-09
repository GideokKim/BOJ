#ifndef BOJ_30000_SRC_30403_MAKE_RAINBOW_H_
#define BOJ_30000_SRC_30403_MAKE_RAINBOW_H_

#include <cctype>
#include <iostream>
#include <string>

class MakeRainbow {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n >> input;
  }

  void Calculate() {
    result = "NO!";
    std::string lower_rainbow = "roygbiv";
    std::string upper_rainbow = "ROYGBIV";

    for (auto target : input) {
      if (std::islower(target)) {
        for (auto& rainbow : lower_rainbow) {
          if (target == rainbow) {
            rainbow = 'a';
            break;
          }
        }
      } else {
        for (auto& rainbow : upper_rainbow) {
          if (target == rainbow) {
            rainbow = 'A';
            break;
          }
        }
      }
    }

    if (lower_rainbow == "aaaaaaa") {
      result = "yes";
    }

    if (upper_rainbow == "AAAAAAA") {
      result = "YES";
    }

    if (lower_rainbow == "aaaaaaa" && upper_rainbow == "AAAAAAA") {
      result = "YeS";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  MakeRainbow make_rainbow;
  make_rainbow.SetInputs();
  make_rainbow.Calculate();
  make_rainbow.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30403_MAKE_RAINBOW_H_
