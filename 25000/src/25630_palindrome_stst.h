#ifndef BOJ_25000_SRC_25630_PALINDROME_STST_H_
#define BOJ_25000_SRC_25630_PALINDROME_STST_H_

#include <iostream>
#include <string>

class PalindromeStst {
 public:
  void SetInputs() { std::cin >> n >> stst; }

  void Calculate() {
    result = 0;
    for (size_t i = 0; i < stst.size() >> 1; ++i) {
      if (stst[i] != stst[n - 1 - i]) {
        ++result;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::string stst;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  PalindromeStst palindrome_stst;
  palindrome_stst.SetInputs();
  palindrome_stst.Calculate();
  palindrome_stst.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25630_PALINDROME_STST_H_
