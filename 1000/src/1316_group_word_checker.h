#ifndef BOJ_1000_SRC_1316_GROUP_WORD_CHECKER_H_
#define BOJ_1000_SRC_1316_GROUP_WORD_CHECKER_H_

#include <iostream>
#include <string>
#include <vector>

class GroupWordChecker {
 public:
  void SetInputs() {
    std::cin >> n;
    words.resize(n);
    for (auto& target : words) {
      std::cin >> target;
    }
  }

  void Calculate() {
    result = words.size();
    for (auto& word : words) {
      char prev = word[0];
      std::vector<bool> prev_checker(26, false);
      for (auto target : word) {
        if (target == prev) {
          prev_checker[target - 'a'] = true;
          continue;
        } else {
          if (prev_checker[target - 'a']) {
            --result;
            break;
          } else {
            prev = target;
            prev_checker[target - 'a'] = true;
          }
        }
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::vector<std::string> words;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  GroupWordChecker group_word_checker;
  group_word_checker.SetInputs();
  group_word_checker.Calculate();
  group_word_checker.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1316_GROUP_WORD_CHECKER_H_
