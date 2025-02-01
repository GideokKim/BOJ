#ifndef BOJ_9000_SRC_9506_SUM_OF_DIVISORS_H_
#define BOJ_9000_SRC_9506_SUM_OF_DIVISORS_H_

#include <iostream>
#include <vector>

class SumOfDivisors {
 public:
  void SetInputs() {}

  void Calculate() {
    int target_number;
    std::cin >> target_number;
    while (target_number != -1) {
      std::vector<int> divisors;
      divisors.clear();

      for (int divisor = 1; divisor < target_number; divisor++) {
        if (target_number % divisor == 0) {
          divisors.push_back(divisor);
        }
      }

      int sum = 0;
      for (const auto& divisor : divisors) {
        sum += divisor;
      }

      if (sum == target_number) {
        std::cout << target_number << " = ";
        for (size_t index = 0; index < divisors.size(); index++) {
          std::cout << divisors[index];
          if (index != divisors.size() - 1) {
            std::cout << " + ";
          }
        }
        std::cout << std::endl;
      } else {
        std::cout << target_number << " is NOT perfect." << std::endl;
      }
      std::cin >> target_number;
    }
  }

  void PrintResult() {}
};

#ifdef BOJ_SUBMIT
int main() {
  SumOfDivisors sum_of_divisors;
  sum_of_divisors.SetInputs();
  sum_of_divisors.Calculate();
  sum_of_divisors.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9506_SUM_OF_DIVISORS_H_
