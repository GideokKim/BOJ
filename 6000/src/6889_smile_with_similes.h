#ifndef BOJ_6000_SRC_6889_SMILE_WITH_SIMILES_H_
#define BOJ_6000_SRC_6889_SMILE_WITH_SIMILES_H_

#include <iostream>
#include <string>
#include <vector>

class SmileWithSimiles {
 public:
  void SetInputs() {
    size_t n, m;
    std::cin >> n >> m;
    adjectives.resize(n);
    nouns.resize(m);
    for (size_t index = 0; index < n; ++index) {
      std::cin >> adjectives[index];
    }
    for (size_t index = 0; index < m; ++index) {
      std::cin >> nouns[index];
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (auto adjective : adjectives) {
      for (auto noun : nouns) {
        std::cout << adjective << " as " << noun << '\n';
      }
    }
  }

 private:
  std::vector<std::string> adjectives;
  std::vector<std::string> nouns;
};

#ifdef BOJ_SUBMIT
int main() {
  SmileWithSimiles smile_with_similes;
  smile_with_similes.SetInputs();
  smile_with_similes.Calculate();
  smile_with_similes.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_6000_SRC_6889_SMILE_WITH_SIMILES_H_
