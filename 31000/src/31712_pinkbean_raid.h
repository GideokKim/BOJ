#ifndef BOJ_31000_SRC_31712_PINKBEAN_RAID_H_
#define BOJ_31000_SRC_31712_PINKBEAN_RAID_H_

#include <iostream>
#include <vector>

class PinkBeanRaid {
 public:
  void SetInputs() {
    u_info.resize(2);
    d_info.resize(2);
    p_info.resize(2);
    std::cin >> u_info[0] >> u_info[1] >> d_info[0] >> d_info[1] >> p_info[0] >>
        p_info[1] >> pinkbean_health;
  }

  void Calculate() {
    pinkbean_health -= (u_info[1] + d_info[1] + p_info[1]);

    if (pinkbean_health <= 0) {
      result = 0;
      return;
    }

    result = 1;
    while (true) {
      if (result % u_info[0] == 0) pinkbean_health -= u_info[1];
      if (result % d_info[0] == 0) pinkbean_health -= d_info[1];
      if (result % p_info[0] == 0) pinkbean_health -= p_info[1];

      if (pinkbean_health <= 0) break;

      ++result;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<int> u_info;
  std::vector<int> d_info;
  std::vector<int> p_info;
  int pinkbean_health;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  PinkBeanRaid pink_bean_raid;
  pink_bean_raid.SetInputs();
  pink_bean_raid.Calculate();
  pink_bean_raid.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31712_PINKBEAN_RAID_H_
