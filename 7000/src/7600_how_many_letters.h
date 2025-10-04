#ifndef BOJ_7000_SRC_7600_HOW_MANY_LETTERS_H_
#define BOJ_7000_SRC_7600_HOW_MANY_LETTERS_H_

#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

class HowManyLetters {
 public:
  void SetInputs() {
    std::string sentence;
    std::getline(std::cin, sentence);
    while (sentence != "#") {
      sentences.emplace_back(sentence);
      std::getline(std::cin, sentence);
    }
  }

  void Calculate() {
    for (auto& sentence : sentences) {
      std::set<char> characters;
      for (auto target : sentence) {
        if ('a' <= target && target <= 'z') {
          characters.insert(target);
        } else if ('A' <= target && target <= 'Z') {
          characters.insert(target + 'a' - 'A');
        }
      }
      results.emplace_back(characters.size());
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<std::string> sentences;
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  HowManyLetters how_many_letters;
  how_many_letters.SetInputs();
  how_many_letters.Calculate();
  how_many_letters.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_7000_SRC_7600_HOW_MANY_LETTERS_H_
