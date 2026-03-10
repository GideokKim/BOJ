#ifndef BOJ_35000_SRC_35277_DUBAI_CHEWY_COOKIES_H_
#define BOJ_35000_SRC_35277_DUBAI_CHEWY_COOKIES_H_

#include <iostream>

class DubaiChewyCookies {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() { result = n / 2000; }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  DubaiChewyCookies dubai_chewy_cookies;
  dubai_chewy_cookies.SetInputs();
  dubai_chewy_cookies.Calculate();
  dubai_chewy_cookies.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_35000_SRC_35277_DUBAI_CHEWY_COOKIES_H_
