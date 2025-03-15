#ifndef BOJ_2000_SRC_2438_GET_A_STAR_1_H_
#define BOJ_2000_SRC_2438_GET_A_STAR_1_H_

#include <iostream>
#include <string>

class GetStar1 {
 public:
  void SetInputs() { std::cin >> N; }

  void Calculate() {
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < i + 1; j++) {
        star += '*';
      }
      star += '\n';
    }
  }

  void PrintResult() { std::cout << star; }

 private:
  int N;
  std::string star;
};

#ifdef BOJ_SUBMIT
int main() {
  GetStar1 get_star_1;
  get_star_1.SetInputs();
  get_star_1.Calculate();
  get_star_1.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2438_GET_A_STAR_1_H_
