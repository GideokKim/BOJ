#ifndef BOJ_32000_SRC_32929_UOS_STRING_H_
#define BOJ_32000_SRC_32929_UOS_STRING_H_

#include <iostream>
#include <string>

class UOSString {
 public:
  void SetInputs() { std::cin >> x; }

  void Calculate() {
    x %= 3;
    if (x == 1) {
      result = "U";
    } else if (x == 2) {
      result = "O";
    } else {
      result = "S";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t x;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  UOSString uos_string;
  uos_string.SetInputs();
  uos_string.Calculate();
  uos_string.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32929_UOS_STRING_H_
