#ifndef BOJ_8000_SRC_8532_SEVEN_RACES_H_
#define BOJ_8000_SRC_8532_SEVEN_RACES_H_

#include <cmath>
#include <iostream>
#include <vector>

class SevenRaces {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    scores.resize(t, std::vector<long long>(7, 0));

    for (size_t i = 0; i < t; ++i) {
      for (size_t j = 0; j < 7; ++j) {
        std::cin >> scores[i][j];
      }
    }
    results.resize(t, 0);

    a = {9.23076, 1.84523, 56.0211, 4.99087, 0.188807, 15.9803, 0.11193};
    b = {26.7, 75, 1.5, 42.5, 210, 3.8, 254};
    c = {1.835, 1.348, 1.05, 1.81, 1.41, 1.04, 1.88};
  }

  void Calculate() {
    for (size_t i = 0; i < scores.size(); ++i) {
      for (size_t j = 0; j < 7; ++j) {
        double num;
        if (j % 3) {
          num = a[j] * std::pow((scores[i][j] - b[j]), c[j]);
        } else {
          num = a[j] * std::pow((b[j] - scores[i][j]), c[j]);
        }
        results[i] += static_cast<long long>(num);
      }
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<double> a;
  std::vector<double> b;
  std::vector<double> c;
  std::vector<std::vector<long long>> scores;
  std::vector<long long> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  SevenRaces seven_races;
  seven_races.SetInputs();
  seven_races.Calculate();
  seven_races.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_8000_SRC_8532_SEVEN_RACES_H_
