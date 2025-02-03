#ifndef BOJ_2000_SRC_2164_CARD2_H_
#define BOJ_2000_SRC_2164_CARD2_H_

#include <iostream>
#include <queue>

class Card2 {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    for (size_t i = 0; i < n; i++) {
      numbers.push(i + 1);
    }
  }

  void Calculate() {
    while (numbers.size() > 1) {
      numbers.pop();
      numbers.push(numbers.front());
      numbers.pop();
    }
  }

  void PrintResult() { std::cout << numbers.front(); }

 private:
  std::queue<int> numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  Card2 card2;
  card2.SetInputs();
  card2.Calculate();
  card2.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2164_CARD2_H_
