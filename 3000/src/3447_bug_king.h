#ifndef BOJ_3000_SRC_3447_BUG_KING_H_
#define BOJ_3000_SRC_3447_BUG_KING_H_

#include <iostream>
#include <regex>
#include <string>
#include <vector>

class BugKing {
 public:
  void SetInputs() {
    std::string line;
    while (std::getline(std::cin, line)) {
      inputs.emplace_back(line);
    }
  }

  void Calculate() {
    results = inputs;
    std::regex pattern("BUG");
    std::string to = "";
    for (size_t i = 0; i < results.size(); ++i) {
      while (results[i].find("BUG") != std::string::npos) {
        results[i] = std::regex_replace(results[i], pattern, to);
      }
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < results.size(); ++i) {
      std::cout << results[i] << "\n";
    }
  }

 private:
  std::vector<std::string> inputs;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  BugKing bug_king;
  bug_king.SetInputs();
  bug_king.Calculate();
  bug_king.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_3000_SRC_3447_BUG_KING_H_
