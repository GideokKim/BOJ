#ifndef BOJ_15000_SRC_15784_JEALOUSY_JINSEO_H_
#define BOJ_15000_SRC_15784_JEALOUSY_JINSEO_H_

#include <iostream>
#include <string>
#include <vector>

class JealousyJinseo {
 public:
  void SetInputs() {
    std::cin >> n >> a >> b;
    room.resize(n, std::vector<long long>(n, 0));
    for (auto& row : room) {
      for (auto& target : row) {
        std::cin >> target;
      }
    }
  }

  void Calculate() {
    result = "HAPPY";
    long long jinseo_point = room[a - 1][b - 1];
    for (const auto point : room[a - 1]) {
      if (jinseo_point < point) {
        result = "ANGRY";
        return;
      }
    }

    for (size_t i = 0; i < n; ++i) {
      if (jinseo_point < room[i][b - 1]) {
        result = "ANGRY";
        return;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, a, b;
  std::vector<std::vector<long long>> room;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  JealousyJinseo jealousy_jinseo;
  jealousy_jinseo.SetInputs();
  jealousy_jinseo.Calculate();
  jealousy_jinseo.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15784_JEALOUSY_JINSEO_H_
