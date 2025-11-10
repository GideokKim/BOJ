#ifndef BOJ_9000_SRC_9076_SCORE_TALLY_H_
#define BOJ_9000_SRC_9076_SCORE_TALLY_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class ScoreTally {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    scores.resize(t);
    results.resize(t);

    for (size_t i = 0; i < t; ++i) {
      std::vector<long long> score(5);
      for (size_t j = 0; j < 5; ++j) {
        std::cin >> score[j];
      }
      std::sort(score.begin(), score.end());
      scores[i] = score;
    }
  }

  void Calculate() {
    for (size_t i = 0; i < scores.size(); ++i) {
      const auto& score = scores[i];
      if (score[3] - score[1] >= 4) {
        results[i] = "KIN\n";
      } else {
        results[i] = std::to_string(score[1] + score[2] + score[3]) + "\n";
      }
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result;
    }
  }

 private:
  std::vector<std::vector<long long>> scores;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  ScoreTally scoreTally;
  scoreTally.SetInputs();
  scoreTally.Calculate();
  scoreTally.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9076_SCORE_TALLY_H_
