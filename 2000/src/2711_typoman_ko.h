#ifndef BOJ_2000_SRC_2711_TYPOMAN_KO_H_
#define BOJ_2000_SRC_2711_TYPOMAN_KO_H_

#include <iostream>
#include <string>
#include <vector>

class Typoman {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    typo_words.resize(n);
    typo_positions.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> typo_positions[i] >> typo_words[i];
    }
  }

  void Calculate() {
    for (size_t i = 0; i < typo_positions.size(); ++i) {
      typo_words[i].erase(typo_positions[i] - 1, 1);
    }
  }

  void PrintResult() {
    for (const auto& word : typo_words) {
      std::cout << word << "\n";
    }
  }

 private:
  std::vector<size_t> typo_positions;
  std::vector<std::string> typo_words;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Typoman typoman;
  typoman.SetInputs();
  typoman.Calculate();
  typoman.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2711_TYPOMAN_KO_H_
