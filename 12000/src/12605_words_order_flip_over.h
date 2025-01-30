#ifndef BOJ_12000_SRC_12605_WORDS_ORDER_FLIP_OVER_H_
#define BOJ_12000_SRC_12605_WORDS_ORDER_FLIP_OVER_H_

#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

class WordsOrderFlipOver {
 public:
  void SetInputs() {
    int n;
    std::cin >> n;
    std::cin.ignore();
    words_stacks.resize(n);

    std::string input;
    for (int i = 0; i < n; ++i) {
      std::getline(std::cin, input);
      std::stringstream ss(input);
      std::string word;
      while (ss >> word) {
        words_stacks[i].push(word);
      }
    }
  }

  void Calculate() {
    results.resize(words_stacks.size(), "Case #");
    for (size_t i = 0; i < results.size(); ++i) {
      results[i] += std::to_string(i + 1) + ":";
      while (!words_stacks[i].empty()) {
        results[i] += " " + words_stacks[i].top();
        words_stacks[i].pop();
      }
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result << std::endl;
    }
  }

 private:
  std::vector<std::stack<std::string>> words_stacks;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  WordsOrderFlipOver words_order_flip_over;
  words_order_flip_over.SetInputs();
  words_order_flip_over.Calculate();
  words_order_flip_over.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_12000_SRC_12605_WORDS_ORDER_FLIP_OVER_H_
