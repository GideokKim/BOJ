#ifndef BOJ_2000_SRC_2153_PRIME_WORDS_H_
#define BOJ_2000_SRC_2153_PRIME_WORDS_H_

#include <iostream>
#include <string>

class PrimeWords {
 public:
  void SetInputs() { std::cin >> word; }

  void Calculate() {
    long long number = 0;
    result = "It is a prime word.";
    for (auto target : word) {
      if ('a' <= target && target <= 'z') {
        number += (target - 'a' + 1);
      } else {
        number += (target - 'A' + 27);
      }
    }
    for (long long num = 2; num < number; ++num) {
      if (number % num == 0) {
        result = "It is not a prime word.";
        return;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string word;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  PrimeWords prime_words;
  prime_words.SetInputs();
  prime_words.Calculate();
  prime_words.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2153_PRIME_WORDS_H_
