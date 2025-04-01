#ifndef BOJ_11000_SRC_11091_USE_ALL_ALPHABETS_H_
#define BOJ_11000_SRC_11091_USE_ALL_ALPHABETS_H_

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

class UseAllAlphabets {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    std::cin.ignore();
    input_strings.resize(n);
    std::string line;
    for (size_t i = 0; i < n; ++i) {
      std::getline(std::cin, line);
      std::transform(line.begin(), line.end(), line.begin(), ::tolower);
      input_strings[i] = line;
    }
  };

  void Calculate() {
    for (const auto& input_string : input_strings) {
      std::vector<bool> alphabet_used(26, false);
      for (const auto& ch : input_string) {
        if (std::isalpha(ch)) {
          alphabet_used[ch - 'a'] = true;
        }
      }

      std::string result = "missing ";
      bool is_missing = false;
      for (size_t i = 0; i < 26; ++i) {
        if (!alphabet_used[i]) {
          result += 'a' + i;
          is_missing = true;
        }
      }
      if (is_missing) {
        results.push_back(result);
      } else {
        results.push_back("pangram");
      }
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result << '\n';
    }
  };

 private:
  std::vector<std::string> input_strings;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  UseAllAlphabets use_all_alphabets;
  use_all_alphabets.SetInputs();
  use_all_alphabets.Calculate();
  use_all_alphabets.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11091_USE_ALL_ALPHABETS_H_
