#ifndef BOJ_30000_SRC_30987_HARU_DERMATOLOGIST_H_
#define BOJ_30000_SRC_30987_HARU_DERMATOLOGIST_H_

#include <iostream>

class HaruDermatologist {
 public:
  void SetInputs() {
    x_1 = 0;
    x_2 = 0;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    std::cin >> x_1 >> x_2 >> a >> b >> c >> d >> e;
  }

  void Calculate() {
    result = a / 3 * (x_2 * x_2 * x_2 - x_1 * x_1 * x_1) +
             (b - d) / 2 * (x_2 * x_2 - x_1 * x_1) + (c - e) * (x_2 - x_1);
  }

  void PrintResult() { std::cout << result; }

 private:
  int x_1;
  int x_2;
  int a;
  int b;
  int c;
  int d;
  int e;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  HaruDermatologist haru_dermatologist;
  haru_dermatologist.SetInputs();
  haru_dermatologist.Calculate();
  haru_dermatologist.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30987_HARU_DERMATOLOGIST_H_
