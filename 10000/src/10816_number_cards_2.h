#ifndef BOJ_10000_SRC_10816_NUMBER_CARDS_2_H_
#define BOJ_10000_SRC_10816_NUMBER_CARDS_2_H_

#include <iostream>
#include <map>

class NumberCards2 {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    long long number;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> number;
      numbers[number]++;
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
        std::cout << numbers[number] << " ";
      } else {
        std::cout << "0 ";
      }
    }
  }

 private:
  std::map<long long, size_t> numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  NumberCards2 number_cards2;
  number_cards2.SetInputs();
  number_cards2.Calculate();
  number_cards2.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10816_NUMBER_CARDS_2_H_
