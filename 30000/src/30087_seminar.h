#ifndef BOJ_30000_SRC_30087_SEMINAR_H_
#define BOJ_30000_SRC_30087_SEMINAR_H_

#include <iostream>
#include <string>
#include <vector>

class Seminar {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    inputs.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> inputs[i];
    }
  }

  void Calculate() {
    for (auto target : inputs) {
      if (target == "Algorithm") {
        results.emplace_back("204");
      } else if (target == "DataAnalysis") {
        results.emplace_back("207");
      } else if (target == "ArtificialIntelligence") {
        results.emplace_back("302");
      } else if (target == "CyberSecurity") {
        results.emplace_back("B101");
      } else if (target == "Network") {
        results.emplace_back("303");
      } else if (target == "Startup") {
        results.emplace_back("501");
      } else {
        results.emplace_back("105");
      }
    }
  }

  void PrintResult() {
    for (auto target : results) {
      std::cout << target << "\n";
    }
  }

 private:
  std::vector<std::string> inputs;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Seminar seminar;
  seminar.SetInputs();
  seminar.Calculate();
  seminar.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30087_SEMINAR_H_
