#ifndef BOJ_2000_SRC_2903_PLANINA_H_
#define BOJ_2000_SRC_2903_PLANINA_H_

#include <cmath>
#include <iostream>

class Planina {
 public:
  void SetInputs() { std::cin >> N; }

  int Calculate() {
    int power_of_2 = pow(2, N - 1);
    int base_number = 2;
    for (int i = 0; i < N; i++) {
      base_number += power_of_2;
      power_of_2 >>= 1;
    }
    return base_number * base_number;
  }

 private:
  int N;
};

#ifdef BOJ_SUBMIT
int main() {
  Planina planina;
  planina.SetInputs();
  std::cout << planina.Calculate() << '\n';

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2903_PLANINA_H_
