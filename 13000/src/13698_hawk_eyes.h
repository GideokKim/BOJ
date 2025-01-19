#ifndef BOJ_13000_SRC_13698_HAWK_EYES_H_
#define BOJ_13000_SRC_13698_HAWK_EYES_H_

#include <iostream>
#include <string>
#include <vector>

class HawkEyes {
 public:
  void SetInputs() {
    std::cin >> mixing_order;
    balls.resize(4, 0);
    balls[0] = 1;
    balls[3] = 2;
  }

  void Calculate() {
    for (const auto& order : mixing_order) {
      if (order == 'A') {
        std::swap(balls[0], balls[1]);
      } else if (order == 'B') {
        std::swap(balls[0], balls[2]);
      } else if (order == 'C') {
        std::swap(balls[0], balls[3]);
      } else if (order == 'D') {
        std::swap(balls[1], balls[2]);
      } else if (order == 'E') {
        std::swap(balls[1], balls[3]);
      } else if (order == 'F') {
        std::swap(balls[2], balls[3]);
      }
    }

    for (int i = 0; i < 4; ++i) {
      if (balls[i] == 1) {
        small_ball = i + 1;
      } else if (balls[i] == 2) {
        big_ball = i + 1;
      }
    }
  }

  void PrintResult() { std::cout << small_ball << '\n' << big_ball; }

 private:
  std::string mixing_order;
  std::vector<int> balls;
  int small_ball;
  int big_ball;
};

#ifdef BOJ_SUBMIT
int main() {
  HawkEyes hawk_eyes;
  hawk_eyes.SetInputs();
  hawk_eyes.Calculate();
  hawk_eyes.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_13000_SRC_13698_HAWK_EYES_H_
