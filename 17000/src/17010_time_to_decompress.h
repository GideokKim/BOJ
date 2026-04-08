#ifndef BOJ_17000_SRC_17010_TIME_TO_DECOMPRESS_H_
#define BOJ_17000_SRC_17010_TIME_TO_DECOMPRESS_H_

#include <iostream>
#include <string>
#include <vector>

class TimeToDecompress {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    inputs.resize(n, std::make_pair(0, ' '));

    for (auto& input : inputs) {
      std::cin >> input.first >> input.second;
    }
  }

  void Calculate() {
    for (size_t i = 0; i < inputs.size(); ++i) {
      results.push_back(std::string(inputs[i].first, inputs[i].second));
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<std::pair<int, char>> inputs;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  TimeToDecompress time_to_decompress;
  time_to_decompress.SetInputs();
  time_to_decompress.Calculate();
  time_to_decompress.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_17000_SRC_17010_TIME_TO_DECOMPRESS_H_