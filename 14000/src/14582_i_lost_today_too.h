#ifndef BOJ_14000_SRC_14582_I_LOST_TODAY_TOO_H_
#define BOJ_14000_SRC_14582_I_LOST_TODAY_TOO_H_

#include <iostream>
#include <string>
#include <vector>

class ILostTodayToo {
 public:
  void SetInputs() {
    jeminis.resize(9);
    start_link.resize(9);

    for (size_t i = 0; i < 9; ++i) {
      std::cin >> jeminis[i];
    }

    for (size_t i = 0; i < 9; ++i) {
      std::cin >> start_link[i];
    }
  }

  void Calculate() {
    result = "No";
    int jeminis_score = 0;
    int start_link_score = 0;

    bool is_win = false;

    for (size_t i = 0; i < 9; ++i) {
      jeminis_score += jeminis[i];

      if (jeminis_score > start_link_score) {
        is_win = true;
      }
      start_link_score += start_link[i];

      if (is_win == true && jeminis_score < start_link_score) {
        result = "Yes";
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<int> jeminis;
  std::vector<int> start_link;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  ILostTodayToo i_lost_today_too;
  i_lost_today_too.SetInputs();
  i_lost_today_too.Calculate();
  i_lost_today_too.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14582_I_LOST_TODAY_TOO_H_
