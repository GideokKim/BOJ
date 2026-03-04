#ifndef BOJ_34000_SRC_34891_MT_PREPARATION_H_
#define BOJ_34000_SRC_34891_MT_PREPARATION_H_

#include <iostream>

class MtPreparation {
 public:
  void SetInputs() { std::cin >> n >> m; }

  void Calculate() {
    result = n / m;
    if (n % m) {
      ++result;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  MtPreparation mt_preparation;
  mt_preparation.SetInputs();
  mt_preparation.Calculate();
  mt_preparation.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34891_MT_PREPARATION_H_
