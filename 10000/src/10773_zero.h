#ifndef BOJ_10000_SRC_10773_ZERO_H_
#define BOJ_10000_SRC_10773_ZERO_H_

#include <iostream>
#include <vector>

class Zero {
 public:
  void SetInputs() {
    int K;
    long long number = 0;
    sum = 0;
    std::cin >> K;
    for (int i = 0; i < K; i++) {
      std::cin >> number;
      if (number == 0) {
        numbers.pop_back();
      } else {
        numbers.push_back(number);
      }
    }
  }

  void Calculate() {
    for (long long number : numbers) {
      sum += number;
    }
  }

  void PrintResult() { std::cout << sum; }

 private:
  long long sum;
  std::vector<long long> numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  Zero zero;
  zero.SetInputs();
  zero.Calculate();
  zero.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10773_ZERO_H_
