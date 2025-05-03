#ifndef BOJ_11000_SRC_11659_FINDING_SUM_OF_INTERVALS_4_H_
#define BOJ_11000_SRC_11659_FINDING_SUM_OF_INTERVALS_4_H_

#include <iostream>
#include <vector>

class FindingSumOfIntervals4 {
 public:
  void SetInputs() {
    size_t n, m;
    std::cin >> n >> m;
    prefix_sum.resize(n + 1, 0);
    result.resize(m, 0);
    for (size_t i = 1; i <= n; ++i) {
      std::cin >> prefix_sum[i];
    }
    coordinates.resize(m, std::vector<size_t>(2, 0));
    for (size_t i = 0; i < m; ++i) {
      std::cin >> coordinates[i][0] >> coordinates[i][1];
    }
  }

  void Calculate() {
    for (size_t i = 1; i < prefix_sum.size(); ++i) {
      prefix_sum[i] += prefix_sum[i - 1];
    }
    for (size_t i = 0; i < coordinates.size(); ++i) {
      result[i] +=
          prefix_sum[coordinates[i][1]] - prefix_sum[coordinates[i][0] - 1];
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < result.size(); ++i) {
      std::cout << result[i] << '\n';
    }
  }

 private:
  std::vector<long long> prefix_sum;
  std::vector<std::vector<size_t>> coordinates;
  std::vector<long long> result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  FindingSumOfIntervals4 finding_sum_of_intervals_4;
  finding_sum_of_intervals_4.SetInputs();
  finding_sum_of_intervals_4.Calculate();
  finding_sum_of_intervals_4.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11659_FINDING_SUM_OF_INTERVALS_4_H_
