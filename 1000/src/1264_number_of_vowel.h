#ifndef BOJ_1000_SRC_1264_NUMBER_OF_VOWEL_H_
#define BOJ_1000_SRC_1264_NUMBER_OF_VOWEL_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class NumberOfVowel {
 public:
  void SetInputs() {
    std::string str;
    while (std::getline(std::cin, str) && str != "#") {
      std::transform(str.begin(), str.end(), str.begin(), ::tolower);
      sentences.push_back(str);
    }
  }

  void Calculate() {
    for (const auto& sentence : sentences) {
      int result = 0;
      for (auto c : sentence) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
          ++result;
        }
      }
      results.push_back(result);
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < results.size(); ++i) {
      std::cout << results[i] << "\n";
    }
  }

 private:
  std::vector<std::string> sentences;
  std::vector<int> results;
};

#ifdef BOJ_SUBMIT
int main() {
  NumberOfVowel number_of_vowel;
  number_of_vowel.SetInputs();
  number_of_vowel.Calculate();
  number_of_vowel.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1264_NUMBER_OF_VOWEL_H_
