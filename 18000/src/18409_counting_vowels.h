#ifndef BOJ_18000_SRC_18409_COUNTING_VOWELS_H_
#define BOJ_18000_SRC_18409_COUNTING_VOWELS_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class CountingVowels {
 public:
  void SetInputs() {
    size_t length;
    std::cin >> length;
    std::cin >> word;
  }

  void Calculate() {
    result = 0;
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    for (const auto& target : word) {
      if (std::find(vowels.begin(), vowels.end(), target) != vowels.end()) {
        result++;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string word;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  CountingVowels counting_vowels;
  counting_vowels.SetInputs();
  counting_vowels.Calculate();
  counting_vowels.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_18000_SRC_18409_COUNTING_VOWELS_H_
