#ifndef BOJ_28000_SRC_28691_INTRODUCE_CLUB_H_
#define BOJ_28000_SRC_28691_INTRODUCE_CLUB_H_

#include <iostream>
#include <string>

class IntroduceClub {
 public:
  void SetInputs() { std::cin >> club_name; }

  void Calculate() {
    if (club_name == "M") {
      club_name = "MatKor";
    } else if (club_name == "W") {
      club_name = "WiCys";
    } else if (club_name == "C") {
      club_name = "CyKor";
    } else if (club_name == "A") {
      club_name = "AlKor";
    } else if (club_name == "$") {
      club_name = "$clear";
    }
  }

  void PrintResult() { std::cout << club_name; }

 private:
  std::string club_name;
};

#ifdef BOJ_SUBMIT
int main() {
  IntroduceClub introduce_club;
  introduce_club.SetInputs();
  introduce_club.Calculate();
  introduce_club.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28691_INTRODUCE_CLUB_H_
