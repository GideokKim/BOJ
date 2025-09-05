#ifndef BOJ_9000_SRC_9093_REVERSING_WORDS_H_
#define BOJ_9000_SRC_9093_REVERSING_WORDS_H_

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class ReversingWords {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    inputs.resize(t);
    std::cin.ignore();

    for (size_t i = 0; i < t; ++i) {
      getline(std::cin, inputs[i]);
      inputs[i];
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (const auto& str : inputs) {
      std::stringstream ss(str);
      std::string target;
      while (ss >> target) {
        auto target_iter = target.rbegin();
        while (target_iter != target.rend()) {
          std::cout << *target_iter;
          ++target_iter;
        }
        std::cout << " ";
      }
      std::cout << "\n";
    }
  }

 private:
  std::vector<std::string> inputs;
};

#ifdef BOJ_SUBMIT
int main() {
  ReversingWords reversing_words;
  reversing_words.SetInputs();
  reversing_words.Calculate();
  reversing_words.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9093_REVERSING_WORDS_H_
