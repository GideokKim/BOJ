#ifndef BOJ_3000_SRC_3230_WHO_GETS_MEDAL_H_
#define BOJ_3000_SRC_3230_WHO_GETS_MEDAL_H_

#include <iostream>
#include <vector>

class WhoGetsMedal {
 public:
  void SetInputs() {
    std::cin >> n >> m;

    first_race.resize(n);
    second_race.resize(m);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> first_race[i];
    }
    for (size_t i = 0; i < m; ++i) {
      std::cin >> second_race[i];
    }
  }

  void Calculate() {
    std::vector<size_t> score;
    score.resize(n + 1, 0);
    for (size_t i = 0; i < first_race.size(); ++i) {
      size_t target = static_cast<size_t>(first_race[i]);
      if (score[target] != 0) {
        for (size_t j = n; j >= target; --j) {
          score[j] = score[j - 1];
        }
      }
      score[target] = i + 1;
    }

    results.resize(m + 1, 0);
    size_t target_rank = m;
    for (size_t i = 0; i < second_race.size(); ++i) {
      size_t target = static_cast<size_t>(second_race[i]);
      if (results[target] != 0) {
        for (size_t j = m; j >= target; --j) {
          results[j] = results[j - 1];
        }
      }
      results[target] = score[target_rank];
      --target_rank;
    }
  }

  void PrintResult() {
    for (size_t i = 1; i < 4; ++i) {
      std::cout << results[i] << "\n";
    }
  }

 private:
  size_t n, m;
  std::vector<int> first_race;
  std::vector<int> second_race;
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  WhoGetsMedal who_gets_medal;
  who_gets_medal.SetInputs();
  who_gets_medal.Calculate();
  who_gets_medal.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_3000_SRC_3230_WHO_GETS_MEDAL_H_
