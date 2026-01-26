#ifndef BOJ_31000_SRC_31776_PPC_REPORT_H_
#define BOJ_31000_SRC_31776_PPC_REPORT_H_

#include <iostream>
#include <vector>

class PpcReport {
 public:
  void SetInputs() {
    std::cin >> n;
    team_scores.resize(n);

    for (auto& team_score : team_scores) {
      std::vector<int> score(3);
      std::cin >> score[0] >> score[1] >> score[2];

      team_score = score;
    }
  }

  void Calculate() {
    result = 0;
    for (const auto& team_score : team_scores) {
      int t;
      if (team_score[0] == -1) {
        continue;
      }

      t = team_score[0];
      if (team_score[1] < t && team_score[1] != -1) {
        continue;
      }
      if (team_score[1] == -1 && team_score[2] != -1) {
        continue;
      }

      t = team_score[1];
      if (team_score[2] < t && team_score[2] != -1) {
        continue;
      }
      ++result;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::vector<std::vector<int>> team_scores;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  PpcReport ppc_report;
  ppc_report.SetInputs();
  ppc_report.Calculate();
  ppc_report.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31776_PPC_REPORT_H_
