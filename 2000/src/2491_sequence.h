#ifndef BOJ_2000_SRC_2491_SEQUENCE_H_
#define BOJ_2000_SRC_2491_SEQUENCE_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Sequence {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    numbers.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> numbers[i];
    }
    subtractions.resize(n - 1, 0);
  }

  void Calculate() {
    result = 0;
    size_t count = 0;
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
      subtractions[i] = numbers[i + 1] - numbers[i];
      if (subtractions[i] >= 0) {
        ++count;
      } else {
        result = std::max(result, count + 1);
        count = 0;
      }
    }
    result = std::max(result, count + 1);

    count = 0;
    for (auto target : subtractions) {
      if (target <= 0) {
        ++count;
      } else {
        result = std::max(result, count + 1);
        count = 0;
      }
    }
    result = std::max(result, count + 1);
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<long long> numbers;
  std::vector<long long> subtractions;
  size_t result = 0;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Sequence sequence;
  sequence.SetInputs();
  sequence.Calculate();
  sequence.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2491_SEQUENCE_H_
