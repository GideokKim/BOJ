#ifndef BOJ_2000_SRC_2083_RUGBY_CLUB_H_
#define BOJ_2000_SRC_2083_RUGBY_CLUB_H_

#include <iostream>
#include <string>
#include <vector>

class RugbyClub {
 public:
  void SetInputs() {
    std::string name;
    int age, weight;
    while (true) {
      std::cin >> name >> age >> weight;
      if (age == 0) {
        break;
      }
      if (age > 17 || weight >= 80) {
        results.emplace_back(name + " Senior\n");
      } else {
        results.emplace_back(name + " Junior\n");
      }
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result;
    }
  }

 private:
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  RugbyClub rugby_club;
  rugby_club.SetInputs();
  rugby_club.Calculate();
  rugby_club.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2083_RUGBY_CLUB_H_
