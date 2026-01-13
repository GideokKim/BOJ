#ifndef BOJ_34000_SRC_34411_M_CLIMB_H_
#define BOJ_34000_SRC_34411_M_CLIMB_H_

#include <iostream>

class MClimb {
 public:
  void SetInputs() { std::cin >> m >> n >> y; }

  void Calculate() { result = m * n; }

  void PrintResult() { std::cout << result; }

 private:
  long long m, n, y;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  MClimb m_climb;
  m_climb.SetInputs();
  m_climb.Calculate();
  m_climb.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34411_M_CLIMB_H_
