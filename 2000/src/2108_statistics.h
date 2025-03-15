#ifndef BOJ_2000_SRC_2108_STATISTICS_H_
#define BOJ_2000_SRC_2108_STATISTICS_H_

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

class Statistics {
 public:
  struct Result {
    int average;
    int median;
    int mode;
    int range;
  };

  void SetInputs() {
    std::cin >> n;
    numbers.resize(n);
    for (size_t i = 0; i < n; i++) {
      std::cin >> numbers[i];
    }
  }

  void Calculate() {
    result = {CalculateAverage(numbers), CalculateMedian(numbers),
              CalculateMode(numbers), CalculateRange(numbers)};
  }

  void PrintResult() {
    std::cout << result.average << '\n'
              << result.median << '\n'
              << result.mode << '\n'
              << result.range << '\n';
  }

 private:
  size_t n;
  std::vector<int> numbers;
  Result result;

  static int CalculateAverage(const std::vector<int>& numbers) {
    double sum = 0;
    for (int number : numbers) {
      sum += number;
    }
    return round(sum / numbers.size());
  }

  static int CalculateMedian(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    return numbers[numbers.size() / 2];
  }

  static int CalculateMode(const std::vector<int>& numbers) {
    std::vector<int> frequency(8001, 0);
    for (int number : numbers) {
      frequency[number + 4000]++;
    }

    int max_count = 0;
    std::vector<int> modes;
    for (int i = 0; i < 8001; i++) {
      if (frequency[i] > max_count) {
        max_count = frequency[i];
        modes.clear();
        modes.push_back(i - 4000);
      } else if (frequency[i] == max_count) {
        modes.push_back(i - 4000);
      }
    }

    return modes.size() > 1 ? modes[1] : modes[0];
  }

  static int CalculateRange(const std::vector<int>& numbers) {
    auto [min, max] = std::minmax_element(numbers.begin(), numbers.end());
    return *max - *min;
  }
};

#ifdef BOJ_SUBMIT

int main() {
  Statistics statistics;
  statistics.SetInputs();
  statistics.Calculate();
  statistics.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2108_STATISTICS_H_
