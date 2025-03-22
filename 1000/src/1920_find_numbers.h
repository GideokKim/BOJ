#ifndef BOJ_1000_SRC_1920_FIND_NUMBERS_H_
#define BOJ_1000_SRC_1920_FIND_NUMBERS_H_

#include <iostream>
#include <set>

class FindNumbers {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    long long number;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> number;
      numbers.insert(number);
    }
  }

  void Calculate() {}

  void PrintResult() {
    size_t m;
    std::cin >> m;
    long long number;
    for (size_t i = 0; i < m; ++i) {
      std::cin >> number;
      if (numbers.count(number)) {
        std::cout << "1\n";
      } else {
        std::cout << "0\n";
      }
    }
  }

 private:
  std::set<long long> numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  FindNumbers find_numbers;
  find_numbers.SetInputs();
  find_numbers.Calculate();
  find_numbers.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1920_FIND_NUMBERS_H_
