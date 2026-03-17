#ifndef BOJ_24000_SRC_24736_FOOTBALL_SCORING_H_
#define BOJ_24000_SRC_24736_FOOTBALL_SCORING_H_

#include <iostream>
#include <vector>

class FootballScoring {
 public:
  void SetInputs() {
    a_team_scores.resize(5, 0);
    b_team_scores.resize(5, 0);

    for (auto& score : a_team_scores) {
      std::cin >> score;
    }

    for (auto& score : b_team_scores) {
      std::cin >> score;
    }
  }

  void Calculate() {
    a_team_result = a_team_scores[0] * 6 + a_team_scores[1] * 3 +
                    a_team_scores[2] * 2 + a_team_scores[3] * 1 +
                    a_team_scores[4] * 2;
    b_team_result = b_team_scores[0] * 6 + b_team_scores[1] * 3 +
                    b_team_scores[2] * 2 + b_team_scores[3] * 1 +
                    b_team_scores[4] * 2;
  }

  void PrintResult() const {
    std::cout << a_team_result << " " << b_team_result;
  }

 private:
  std::vector<int> a_team_scores;
  std::vector<int> b_team_scores;
  int a_team_result;
  int b_team_result;
};

#ifdef BOJ_SUBMIT
int main() {
  FootballScoring football_scoring;
  football_scoring.SetInputs();
  football_scoring.Calculate();
  football_scoring.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24736_FOOTBALL_SCORING_H_
