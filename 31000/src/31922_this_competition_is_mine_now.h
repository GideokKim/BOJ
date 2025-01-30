#ifndef BOJ_31000_SRC_31922_THIS_COMPETITION_IS_MINE_NOW_H_
#define BOJ_31000_SRC_31922_THIS_COMPETITION_IS_MINE_NOW_H_

#include <iostream>
class ThisCompetitionIsMineNow {
 public:
  void SetInputs() { std::cin >> a >> p >> c; }

  void Calculate() { result = a + c > p ? a + c : p; }

  void PrintResult() { std::cout << result; }

 private:
  int a, p, c;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  ThisCompetitionIsMineNow this_competition_is_mine_now;
  this_competition_is_mine_now.SetInputs();
  this_competition_is_mine_now.Calculate();
  this_competition_is_mine_now.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31922_THIS_COMPETITION_IS_MINE_NOW_H_
