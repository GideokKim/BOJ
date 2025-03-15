#ifndef BOJ_10000_SRC_10813_CHANGE_BALL_H_
#define BOJ_10000_SRC_10813_CHANGE_BALL_H_

#include <algorithm>
#include <iostream>
#include <vector>

class ChangeBall {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n >> m;
    ball_numbers.resize(n);
    for (size_t index = 0; index < n; ++index) {
      ball_numbers[index] = index + 1;
    }
  }

  void Calculate() {
    for (size_t i = 0; i < m; ++i) {
      size_t left, right;
      std::cin >> left >> right;
      std::swap(ball_numbers[left - 1], ball_numbers[right - 1]);
    }
  }

  void PrintResult() {
    for (size_t number : ball_numbers) {
      std::cout << number << " ";
    }
  }

 private:
  size_t m;
  std::vector<size_t> ball_numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  ChangeBall change_ball;
  change_ball.SetInputs();
  change_ball.Calculate();
  change_ball.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10813_CHANGE_BALL_H_
