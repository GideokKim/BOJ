#ifndef BOJ_2000_SRC_2563_CONFETTI_H_
#define BOJ_2000_SRC_2563_CONFETTI_H_

#include <iostream>
#include <vector>

class Confetti {
 public:
  void SetInputs() {
    drawing_paper.resize(100, std::vector<int>(100, 0));
    int number_of_confetti;
    std::cin >> number_of_confetti;
    int x, y;
    for (int i = 0; i < number_of_confetti; i++) {
      std::cin >> x >> y;
      for (int j = x; j < x + 10; j++) {
        for (int k = y; k < y + 10; k++) {
          drawing_paper[j][k] = 1;
        }
      }
    }
  }

  void CalculateArea() {
    area = 0;
    for (int i = 0; i < 100; i++) {
      for (int j = 0; j < 100; j++) {
        if (drawing_paper[i][j] == 1) {
          area++;
        }
      }
    }
  }

  void PrintArea() { std::cout << area; }

 private:
  std::vector<std::vector<int>> drawing_paper;
  int area;
};

#ifdef BOJ_SUBMIT
int main() {
  Confetti confetti;
  confetti.SetInputs();
  confetti.CalculateArea();
  confetti.PrintArea();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2563_CONFETTI_H_
