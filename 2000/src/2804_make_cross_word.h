#ifndef BOJ_2000_SRC_2804_MAKE_CROSS_WORD_H_
#define BOJ_2000_SRC_2804_MAKE_CROSS_WORD_H_

#include <iostream>
#include <string>
#include <vector>

class MakeCrossWord {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() {
    results.resize(b.size(), std::string(a.size(), '.'));
    for (size_t i = 0; i < a.size(); ++i) {
      auto a_target = a[i];
      for (size_t j = 0; j < b.size(); ++j) {
        auto b_target = b[j];
        if (a_target == b_target) {
          results[j] = a;
          for (size_t k = 0; k < b.size(); ++k) {
            results[k][i] = b[k];
          }
          return;
        }
      }
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::string a, b;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  MakeCrossWord makeCrossWord;
  makeCrossWord.SetInputs();
  makeCrossWord.Calculate();
  makeCrossWord.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2804_MAKE_CROSS_WORD_H_
