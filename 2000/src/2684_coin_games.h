#ifndef BOJ_2000_SRC_2684_COIN_GAMES_H_
#define BOJ_2000_SRC_2684_COIN_GAMES_H_

#include <iostream>
#include <string>
#include <vector>

class CoinGames {
 public:
  void SetInputs() {
    std::cin >> test_case;
    input_strings.resize(test_case);
    results.resize(test_case, std::vector<size_t>(8, 0));
    for (size_t i = 0; i < test_case; i++) {
      std::cin >> input_strings[i];
    }
  }

  void Calculate() {
    size_t target = 0;
    for (const auto& input_string : input_strings) {
      for (size_t i = 0; i < 38; ++i) {
        if (input_string[i] == 'T') {
          if (input_string[i + 1] == 'T') {
            if (input_string[i + 2] == 'T') {
              ++results[target][0];
            } else {
              ++results[target][1];
            }
          } else {
            if (input_string[i + 2] == 'T') {
              ++results[target][2];
            } else {
              ++results[target][3];
            }
          }
        } else {
          if (input_string[i + 1] == 'T') {
            if (input_string[i + 2] == 'T') {
              ++results[target][4];
            } else {
              ++results[target][5];
            }
          } else {
            if (input_string[i + 2] == 'T') {
              ++results[target][6];
            } else {
              ++results[target][7];
            }
          }
        }
      }
      ++target;
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      for (const auto& target : result) {
        std::cout << target << " ";
      }
      std::cout << "\n";
    }
  }

 private:
  size_t test_case;
  std::vector<std::string> input_strings;
  std::vector<std::vector<size_t>> results;
};

#ifdef BOJ_SUBMIT
int main() {
  CoinGames coin_games;
  coin_games.SetInputs();
  coin_games.Calculate();
  coin_games.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2684_COIN_GAMES_H_
