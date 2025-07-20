#ifndef BOJ_10000_SRC_10820_STRING_ANALYSIS_H_
#define BOJ_10000_SRC_10820_STRING_ANALYSIS_H_

#include <iostream>
#include <string>
#include <vector>

class StringAnalysis {
 public:
  void SetInputs() {
    std::string input;
    while (std::getline(std::cin, input)) {
      inputs.emplace_back(input);
    }
  }

  void Calculate() {
    results.resize(inputs.size(), std::vector<size_t>(4, 0));
    for (size_t i = 0; i < inputs.size(); ++i) {
      for (auto target : inputs[i]) {
        if ('0' <= target && target <= '9') {
          ++results[i][2];
        } else if ('a' <= target && target <= 'z') {
          ++results[i][0];
        } else if ('A' <= target && target <= 'Z') {
          ++results[i][1];
        } else {
          ++results[i][3];
        }
      }
    }
  }

  void PrintResult() {
    for (auto& result : results) {
      std::cout << result[0] << " " << result[1] << " " << result[2] << " "
                << result[3] << "\n";
    }
  }

 private:
  std::vector<std::string> inputs;
  std::vector<std::vector<size_t>> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  StringAnalysis string_analysis;
  string_analysis.SetInputs();
  string_analysis.Calculate();
  string_analysis.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10820_STRING_ANALYSIS_H_
