#ifndef BOJ_11000_SRC_11117_LETTER_COOKIES_H_
#define BOJ_11000_SRC_11117_LETTER_COOKIES_H_

#include <iostream>
#include <string>
#include <vector>

class LetterCookies {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    std::string cookie_string_input;
    alphabet_count.resize(26, 0);

    for (size_t i = 0; i < t; ++i) {
      std::cin >> cookie_string_input;
      std::fill(alphabet_count.begin(), alphabet_count.end(), 0);

      for (size_t j = 0; j < cookie_string_input.size(); ++j) {
        alphabet_count[cookie_string_input[j] - 'A']++;
      }

      size_t word_count;
      std::cin >> word_count;

      for (size_t j = 0; j < word_count; ++j) {
        std::string word_input;
        std::cin >> word_input;

        std::vector<int> word_alphabet_count = alphabet_count;

        for (size_t k = 0; k < word_input.size(); ++k) {
          word_alphabet_count[word_input[k] - 'A']--;
        }

        bool is_possible = true;
        for (size_t j = 0; j < 26; ++j) {
          if (word_alphabet_count[j] < 0) {
            is_possible = false;
            break;
          }
        }
        results.push_back(is_possible);
      }
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < results.size(); ++i) {
      std::cout << (results[i] ? "YES" : "NO") << std::endl;
    }
  };

 private:
  std::vector<bool> results;
  std::vector<int> alphabet_count;
};

#ifdef BOJ_SUBMIT
int main() {
  LetterCookies letter_cookies;
  letter_cookies.SetInputs();
  letter_cookies.Calculate();
  letter_cookies.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11117_LETTER_COOKIES_H_
