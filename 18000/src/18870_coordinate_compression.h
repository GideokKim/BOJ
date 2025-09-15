#ifndef BOJ_18000_SRC_18870_COORDINATE_COMPRESSION_H_
#define BOJ_18000_SRC_18870_COORDINATE_COMPRESSION_H_

#include <algorithm>
#include <iostream>
#include <vector>

class CoordinateCompression {
 public:
  static bool comp(std::pair<size_t, long long> a,
                   std::pair<size_t, long long> b) {
    return a.second < b.second;
  }

  void SetInputs() {
    std::cin >> n;
    numbers.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::pair<size_t, long long> num;
      num.first = i;
      std::cin >> num.second;
      numbers[i] = num;
    }
    std::sort(numbers.begin(), numbers.end(), comp);
  }

  void Calculate() {
    long long previous_value = 1000000001;
    long long count = -1;

    for (size_t index = 0; index < n; ++index) {
      if (previous_value != numbers[index].second) {
        ++count;
      }

      previous_value = numbers[index].second;
      numbers[index].second = count;
    }
    std::sort(numbers.begin(), numbers.end());
  }

  void PrintResult() {
    for (const auto result : numbers) {
      std::cout << result.second << " ";
    }
  }

 private:
  size_t n;
  std::vector<std::pair<size_t, long long>> numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  CoordinateCompression coordinate_compression;
  coordinate_compression.SetInputs();
  coordinate_compression.Calculate();
  coordinate_compression.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_18000_SRC_18870_COORDINATE_COMPRESSION_H_
