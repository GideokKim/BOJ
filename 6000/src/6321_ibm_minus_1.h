#ifndef BOJ_6000_SRC_6321_IBM_MINUS_1_H_
#define BOJ_6000_SRC_6321_IBM_MINUS_1_H_

#include <iostream>
#include <string>
#include <vector>

class IbmMinus1 {
 public:
  void SetInputs() {
    std::cin >> n;
    words.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> words[i];
    }
  }

  void Calculate() {
    for (const auto& word : words) {
      std::string answer = "";
      for (const auto& target : word) {
        if (target == 'Z') {
          answer += 'A';
        } else {
          answer += target + 1;
        }
      }
      results.emplace_back(answer);
    }
  }

  void PrintResult() {
    size_t count = 1;
    for (const auto& result : results) {
      std::cout << "String #" << count << "\n";
      std::cout << result << "\n\n";
      ++count;
    }
  }

 private:
  size_t n;
  std::vector<std::string> words;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  IbmMinus1 ibm_minus_1;
  ibm_minus_1.SetInputs();
  ibm_minus_1.Calculate();
  ibm_minus_1.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_6000_SRC_6321_IBM_MINUS_1_H_
