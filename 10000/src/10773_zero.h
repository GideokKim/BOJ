#ifndef BOJ_10000_SRC_10773_ZERO_H_
#define BOJ_10000_SRC_10773_ZERO_H_

#include <iostream>
#include <vector>

class AccountBook {
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

  void CalculateSum() {
    for (long long number : numbers) {
      sum += number;
    }
  }

  long long GetSum() { return sum; }

 private:
  long long sum;
  std::vector<long long> numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  AccountBook account_book;
  account_book.SetInputs();
  account_book.CalculateSum();
  std::cout << account_book.GetSum();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10773_ZERO_H_
