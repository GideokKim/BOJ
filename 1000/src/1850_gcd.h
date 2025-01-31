#ifndef BOJ_1000_SRC_1850_GCD_H_
#define BOJ_1000_SRC_1850_GCD_H_

#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

class Gcd {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() {
    if (a < b) {
      std::swap(a, b);
    }
    while (b != 0) {
      unsigned long long temp = a % b;
      a = b;
      b = temp;
    }
    result = a;
  }

  void PrintResult() {
    std::fill_n(std::ostream_iterator<char>(std::cout, ""), result, '1');
  }

 private:
  unsigned long long a, b;
  unsigned long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Gcd gcd;
  gcd.SetInputs();
  gcd.Calculate();
  gcd.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1850_GCD_H_
