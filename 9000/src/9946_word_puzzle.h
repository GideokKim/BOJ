#ifndef BOJ_9000_SRC_9946_WORD_PUZZLE_H_
#define BOJ_9000_SRC_9946_WORD_PUZZLE_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class WordPuzzle {
 public:
  void SetInputs() {
    std::string perfect_word;
    std::string collected_word;

    while (true) {
      std::cin >> perfect_word >> collected_word;
      if (perfect_word == "END" && collected_word == "END") {
        return;
      }

      perfect_words.emplace_back(perfect_word);
      collected_words.emplace_back(collected_word);
    }
  }

  void Calculate() {
    results.resize(collected_words.size(), false);
    for (size_t i = 0; i < collected_words.size(); ++i) {
      std::sort(collected_words[i].begin(), collected_words[i].end());
      std::sort(perfect_words[i].begin(), perfect_words[i].end());

      if (collected_words[i] == perfect_words[i]) {
        results[i] = true;
      }
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < results.size(); ++i) {
      std::cout << "Case " << i + 1 << ": ";
      if (results[i]) {
        std::cout << "same\n";
      } else {
        std::cout << "different\n";
      }
    }
  }

 private:
  std::vector<std::string> perfect_words;
  std::vector<std::string> collected_words;
  std::vector<bool> results;
};

#ifdef BOJ_SUBMIT
int main() {
  WordPuzzle word_puzzle;
  word_puzzle.SetInputs();
  word_puzzle.Calculate();
  word_puzzle.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9946_WORD_PUZZLE_H_
