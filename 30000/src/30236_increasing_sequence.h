#ifndef BOJ_30000_SRC_30236_INCREASING_SEQUENCE_H_
#define BOJ_30000_SRC_30236_INCREASING_SEQUENCE_H_

#include <iostream>
#include <vector>

class IncreasingSequence {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    inputs.resize(t);

    std::vector<long long> input;
    for (size_t i = 0; i < t; ++i) {
      size_t input_size;
      std::cin >> input_size;

      input.resize(input_size, 0);
      for (auto& target : input) {
        std::cin >> target;
      }
      inputs[i] = input;
    }
  }

  void Calculate() {
    for (const auto& sequence : inputs) {
      long long start = 0;
      for (const auto target : sequence) {
        ++start;
        if (target == start) {
          ++start;
        }
      }
      results.emplace_back(start);
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<std::vector<long long>> inputs;
  std::vector<long long> results;
};

#ifdef BOJ_SUBMIT
int main() {
  IncreasingSequence increasing_sequence;
  increasing_sequence.SetInputs();
  increasing_sequence.Calculate();
  increasing_sequence.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30236_INCREASING_SEQUENCE_H_
