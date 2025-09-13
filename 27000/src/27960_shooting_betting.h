#ifndef BOJ_27000_SRC_27960_SHOOTING_BETTING_H_
#define BOJ_27000_SRC_27960_SHOOTING_BETTING_H_

#include <bitset>
#include <iostream>

class ShootingBetting {
 public:
  void SetInputs() {
    int a_int, b_int;
    std::cin >> a_int >> b_int;
    a = a_int;
    b = b_int;
  }

  void Calculate() {
    a ^= b;
    result = a.to_ulong();
  }

  void PrintResult() const { std::cout << result; }

 private:
  std::bitset<10> a, b;
  unsigned long result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  ShootingBetting shooting_betting;
  shooting_betting.SetInputs();
  shooting_betting.Calculate();
  shooting_betting.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27960_SHOOTING_BETTING_H_
