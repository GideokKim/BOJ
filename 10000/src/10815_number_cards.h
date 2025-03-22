#ifndef BOJ_10000_SRC_10815_NUMBER_CARDS_H_
#define BOJ_10000_SRC_10815_NUMBER_CARDS_H_

#include <iostream>
#include <set>

class NumberCards {
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
        std::cout << "1 ";
      } else {
        std::cout << "0 ";
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

  NumberCards number_cards;
  number_cards.SetInputs();
  number_cards.Calculate();
  number_cards.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10815_NUMBER_CARDS_H_
