#ifndef BOJ_25000_SRC_25591_PUANG_AND_JONGYUN_H_
#define BOJ_25000_SRC_25591_PUANG_AND_JONGYUN_H_

#include <iostream>

class PuangAndJongyun {
 public:
  void SetInputs() { std::cin >> num1 >> num2; }

  void Calculate() {
    a = 100 - num1;
    b = 100 - num2;
    c = 100 - (a + b);
    d = a * b;
    q = d / 100;
    r = d % 100;
  }

  void PrintResult() {
    std::cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r
              << '\n';
    std::cout << c + q << ' ' << r;
  }

 private:
  int num1, num2;
  int a, b, c, d, q, r;
};

#ifdef BOJ_SUBMIT
int main() {
  PuangAndJongyun puang_and_jongyun;
  puang_and_jongyun.SetInputs();
  puang_and_jongyun.Calculate();
  puang_and_jongyun.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25591_PUANG_AND_JONGYUN_H_
