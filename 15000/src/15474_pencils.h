#ifndef BOJ_15000_SRC_15474_PENCILS_H_
#define BOJ_15000_SRC_15474_PENCILS_H_

#include <algorithm>
#include <iostream>

class Pencils {
 public:
  void SetInputs() { std::cin >> n >> a >> b >> c >> d; }

  void Calculate() {
    long long x_price = (n / a) * b;
    if (n % a != 0) {
      x_price += b;
    }
    long long y_price = (n / c) * d;
    if (n % c != 0) {
      y_price += d;
    }
    result = std::min(x_price, y_price);
  }

  void PrintResult() { std::cout << result; }

 private:
  long long n, a, b, c, d;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Pencils pencils;
  pencils.SetInputs();
  pencils.Calculate();
  pencils.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15474_PENCILS_H_
