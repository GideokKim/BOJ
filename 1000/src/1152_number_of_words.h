#ifndef BOJ_1000_SRC_1152_NUMBER_OF_WORDS_H_
#define BOJ_1000_SRC_1152_NUMBER_OF_WORDS_H_

#include <iostream>
#include <string>

class NumberOfWords {
 public:
  void SetInputs() { std::getline(std::cin, sentence); }

  void Calculate() {
    number_of_words = 0;
    if (sentence.empty()) {
      return;
    }
    if (sentence[0] == ' ' && sentence.size() == 1) {
      return;
    }

    number_of_words = 1;
    for (size_t index = 0; index < sentence.size(); ++index) {
      if (index == 0 && sentence[index] == ' ') {
        continue;
      } else if (index == sentence.size() - 1 && sentence[index] == ' ') {
        continue;
      } else if (sentence[index] == ' ') {
        ++number_of_words;
      }
    }
  }

  void PrintResult() { std::cout << number_of_words; }

 private:
  std::string sentence;
  size_t number_of_words;
};

#ifdef BOJ_SUBMIT
int main() {
  NumberOfWords number_of_words;
  number_of_words.SetInputs();
  number_of_words.Calculate();
  number_of_words.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1152_NUMBER_OF_WORDS_H_
