#ifndef BOJ_10000_SRC_10810_PUT_BALL_IN_H_
#define BOJ_10000_SRC_10810_PUT_BALL_IN_H_

#include <iostream>
#include <vector>

class PutBallIn {
 public:
  void SetInputs() {
    int n;
    std::cin >> n >> m;
    ball_numbers.resize(n, 0);
  }

  void Calculate() {
    for (int i = 0; i < m; i++) {
      int start, end, number;
      std::cin >> start >> end >> number;
      for (int j = start - 1; j < end; ++j) {
        ball_numbers[j] = number;
      }
    }
  }

  void PrintResult() {
    for (int number : ball_numbers) {
      std::cout << number << " ";
    }
  }

 private:
  int m;
  std::vector<int> ball_numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  PutBallIn put_ball_in;
  put_ball_in.SetInputs();
  put_ball_in.Calculate();
  put_ball_in.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10810_PUT_BALL_IN_H_
