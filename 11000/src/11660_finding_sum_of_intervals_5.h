#ifndef BOJ_11000_SRC_11660_FINDING_SUM_OF_INTERVALS_5_H_
#define BOJ_11000_SRC_11660_FINDING_SUM_OF_INTERVALS_5_H_

#include <iostream>
#include <vector>

class FindingSumOfIntervals5 {
 public:
  void SetInputs() {
    size_t n, m;
    std::cin >> n >> m;
    prefix_sum.resize(n + 1, std::vector<long long>(n + 1, 0));
    result.resize(m, 0);
    for (size_t i = 1; i <= n; ++i) {
      for (size_t j = 1; j <= n; ++j) {
        std::cin >> prefix_sum[i][j];
      }
    }
    coordinates.resize(m, std::vector<size_t>(4, 0));
    for (size_t i = 0; i < m; ++i) {
      std::cin >> coordinates[i][0] >> coordinates[i][1] >> coordinates[i][2] >>
          coordinates[i][3];
    }
  }

  void Calculate() {
    for (size_t i = 1; i < prefix_sum.size(); ++i) {
      for (size_t j = 1; j < prefix_sum[i].size(); ++j) {
        prefix_sum[i][j] += prefix_sum[i][j - 1];
      }
    }
    for (size_t i = 0; i < coordinates.size(); ++i) {
      for (size_t x_index = coordinates[i][0]; x_index <= coordinates[i][2];
           ++x_index) {
        result[i] += prefix_sum[x_index][coordinates[i][3]] -
                     prefix_sum[x_index][coordinates[i][1] - 1];
      }
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < result.size(); ++i) {
      std::cout << result[i] << '\n';
    }
  }

 private:
  std::vector<std::vector<long long>> prefix_sum;
  std::vector<std::vector<size_t>> coordinates;
  std::vector<long long> result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  FindingSumOfIntervals5 finding_sum_of_intervals_5;
  finding_sum_of_intervals_5.SetInputs();
  finding_sum_of_intervals_5.Calculate();
  finding_sum_of_intervals_5.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11660_FINDING_SUM_OF_INTERVALS_5_H_
