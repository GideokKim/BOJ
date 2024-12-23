#ifndef BOJ_2000_SRC_2108_STATISTICS_H_
#define BOJ_2000_SRC_2108_STATISTICS_H_

#include <algorithm>
#include <cmath>
#include <vector>

class Statistics {
 public:
  struct Result {
    int average;
    int median;
    int mode;
    int range;
  };

  static Result Calculate(const std::vector<int>& numbers) {
    return {CalculateAverage(numbers), CalculateMedian(numbers),
            CalculateMode(numbers), CalculateRange(numbers)};
  }

 private:
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
#include <iostream>

int main() {
  int N;
  std::cin >> N;

  std::vector<int> numbers;
  for (int i = 0; i < N; i++) {
    int number;
    std::cin >> number;
    numbers.push_back(number);
  }

  auto result = Statistics::Calculate(numbers);

  std::cout << result.average << '\n'
            << result.median << '\n'
            << result.mode << '\n'
            << result.range << '\n';

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2108_STATISTICS_H_
