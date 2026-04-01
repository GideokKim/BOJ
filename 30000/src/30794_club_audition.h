#ifndef BOJ_30000_SRC_30794_CLUB_AUDITION_H_
#define BOJ_30000_SRC_30794_CLUB_AUDITION_H_

#include <iostream>
#include <string>

class ClubAudition {
 public:
  void SetInputs() { std::cin >> lv >> verdict; }

  void Calculate() {
    result = 0;
    if (verdict == "miss") {
      return;
    } else if (verdict == "bad") {
      result = 200;
    } else if (verdict == "cool") {
      result = 400;
    } else if (verdict == "great") {
      result = 600;
    } else if (verdict == "perfect") {
      result = 1000;
    }
    result *= lv;
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t lv;
  std::string verdict;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  ClubAudition club_audition;
  club_audition.SetInputs();
  club_audition.Calculate();
  club_audition.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30794_CLUB_AUDITION_H_
