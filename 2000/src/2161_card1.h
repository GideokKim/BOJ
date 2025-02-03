#ifndef BOJ_2000_SRC_2161_CARD1_H_
#define BOJ_2000_SRC_2161_CARD1_H_

#include <iostream>
#include <queue>

class Card1 {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    for (size_t i = 0; i < n; i++) {
      numbers.push(i + 1);
    }
    result.resize(n, 0);
  }

  void Calculate() {
    size_t index = 0;
    while (numbers.size() > 1) {
      result[index++] = numbers.front();
      numbers.pop();
      numbers.push(numbers.front());
      numbers.pop();
    }
    result[index] = numbers.front();
  }

  void PrintResult() {
    for (size_t i = 0; i < result.size(); i++) {
      std::cout << result[i] << ' ';
    }
  }

 private:
  std::queue<int> numbers;
  std::vector<int> result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Card1 card1;
  card1.SetInputs();
  card1.Calculate();
  card1.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2161_CARD1_H_
