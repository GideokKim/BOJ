#ifndef BOJ_30000_SRC_30821_IF_IT_CAN_BE_CONSTELLATION_H_
#define BOJ_30000_SRC_30821_IF_IT_CAN_BE_CONSTELLATION_H_

#include <iostream>

class IfItCanBeConstellation {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result = 1;
    long long m = 5;
    for (long long num = n; num > n - 5; --num) {
      result *= num;
      while (m > 0 && result % m == 0) {
        result /= m;
        --m;
      }
    }
    while (m > 0) {
      result /= m;
      --m;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  long long n;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  IfItCanBeConstellation if_it_can_be_constellation;
  if_it_can_be_constellation.SetInputs();
  if_it_can_be_constellation.Calculate();
  if_it_can_be_constellation.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30821_IF_IT_CAN_BE_CONSTELLATION_H_
