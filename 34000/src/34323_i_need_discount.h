#ifndef BOJ_34000_SRC_34323_I_NEED_DISCOUNT_H_
#define BOJ_34000_SRC_34323_I_NEED_DISCOUNT_H_

#include <iostream>

class INeedDiscount {
 public:
  void SetInputs() { std::cin >> n >> m >> s; }

  void Calculate() {
    long long m_plus_1 = m * s;
    long long n_percent = (m_plus_1 + s) * (100 - n) / 100;
    result = m_plus_1 > n_percent ? n_percent : m_plus_1;
  }

  void PrintResult() { std::cout << result; }

 private:
  long long n, m, s;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  INeedDiscount iNeedDiscount;
  iNeedDiscount.SetInputs();
  iNeedDiscount.Calculate();
  iNeedDiscount.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34323_I_NEED_DISCOUNT_H_
