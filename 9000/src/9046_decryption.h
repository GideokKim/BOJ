#ifndef BOJ_9000_SRC_9046_DECRYPTION_H_
#define BOJ_9000_SRC_9046_DECRYPTION_H_

#include <iostream>
#include <string>
#include <vector>

class Decryption {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    inputs.resize(t);
    std::cin.ignore();
    for (size_t i = 0; i < t; i++) {
      std::getline(std::cin, inputs[i]);
    }
  }

  void Calculate() {
    for (const auto& input : inputs) {
      std::vector<int> counts(26, 0);
      for (const auto& c : input) {
        if (c == ' ') {
          continue;
        }
        counts[c - 'a']++;
      }
      std::string result;
      int max_count = -1;
      for (size_t i = 0; i < counts.size(); i++) {
        if (max_count == counts[i]) {
          result = "?";
        }
        if (counts[i] > max_count) {
          max_count = counts[i];
          result = i + 'a';
        }
      }
      results.push_back(result);
    }
  }

  void PrintResult() {
    for (const auto& answer : results) {
      std::cout << answer << std::endl;
    }
  }

 private:
  std::vector<std::string> inputs;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  Decryption decryption;
  decryption.SetInputs();
  decryption.Calculate();
  decryption.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9046_DECRYPTION_H_
