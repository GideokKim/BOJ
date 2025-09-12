#ifndef BOJ_14000_SRC_14568_YONSEI_2017_H_
#define BOJ_14000_SRC_14568_YONSEI_2017_H_

#include <iostream>

class Yonsei2017 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result = 0;
    if (n < 5) {
      return;
    }

    for (long long i = 2; i < n; i += 2) {
      for (long long j = 1; j <= n - i; ++j) {
        for (long long k = 1; k <= n - i - j; ++k) {
          if (i + j + k < n) {
            continue;
          } else if (i + j + k > n) {
            break;
          }

          if (i % 2 == 0 && j >= k + 2) {
            ++result;
          }
        }
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  long long n;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Yonsei2017 yonsei_2017;
  yonsei_2017.SetInputs();
  yonsei_2017.Calculate();
  yonsei_2017.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14568_YONSEI_2017_H_
