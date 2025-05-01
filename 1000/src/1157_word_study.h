#ifndef BOJ_1000_SRC_1157_WORD_STUDY_H_
#define BOJ_1000_SRC_1157_WORD_STUDY_H_

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>
class WordStudy {
 public:
  void SetInputs() { std::cin >> word; }

  void Calculate() {
    std::transform(word.begin(), word.end(), word.begin(), ::toupper);
    count.resize(26, 0);
    for (size_t index = 0; index < word.size(); ++index) {
      count[word[index] - 'A']++;
    }

    size_t max_count_index = 0;
    result = std::string(1, 'A' + max_count_index);

    for (size_t index = 1; index < count.size(); ++index) {
      if (count[index] > count[max_count_index]) {
        max_count_index = index;
        result = std::string(1, 'A' + max_count_index);
      }
    }

    for (size_t index = 0; index < count.size(); ++index) {
      if (index == max_count_index) {
        continue;
      }

      if (count[index] == count[max_count_index]) {
        result = "?";
        break;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string word;
  std::vector<size_t> count;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  WordStudy word_study;
  word_study.SetInputs();
  word_study.Calculate();
  word_study.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1157_WORD_STUDY_H_
