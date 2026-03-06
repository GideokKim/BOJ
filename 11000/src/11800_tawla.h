#ifndef BOJ_11000_SRC_11800_TAWLA_H_
#define BOJ_11000_SRC_11800_TAWLA_H_

#include <iostream>
#include <string>
#include <utility>
#include <vector>

class Tawla {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;

    dices.resize(t);

    size_t a, b;
    for (size_t i = 0; i < t; ++i) {
      std::cin >> a >> b;
      if (b > a) {
        std::swap(a, b);
      }
      dices[i] = std::make_pair(a, b);
    }
  }

  void Calculate() {
    std::vector<std::string> aliases = {"",     "Yakk", "Doh",   "Seh",
                                        "Ghar", "Bang", "Sheesh"};

    for (const auto& dice : dices) {
      if (dice.first == dice.second) {
        if (dice.first == 1) {
          results.emplace_back("Habb Yakk");
        } else if (dice.first == 2) {
          results.emplace_back("Dobara");
        } else if (dice.first == 3) {
          results.emplace_back("Dousa");
        } else if (dice.first == 4) {
          results.emplace_back("Dorgy");
        } else if (dice.first == 5) {
          results.emplace_back("Dabash");
        } else {
          results.emplace_back("Dosh");
        }
      } else if (dice.first == 6 && dice.second == 5) {
        results.emplace_back("Sheesh Beesh");
      } else {
        results.emplace_back(aliases[dice.first] + " " + aliases[dice.second]);
      }
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < results.size(); ++i) {
      std::cout << "Case " << i + 1 << ": " << results[i] << "\n";
    }
  }

 private:
  std::vector<std::pair<size_t, size_t>> dices;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Tawla tawla;
  tawla.SetInputs();
  tawla.Calculate();
  tawla.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11800_TAWLA_H_
