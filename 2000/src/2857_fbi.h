#ifndef BOJ_2000_SRC_2857_FBI_H_
#define BOJ_2000_SRC_2857_FBI_H_

#include <iostream>
#include <string>
#include <vector>

class FBI {
 public:
  void SetInputs() {
    agents.resize(5);
    for (auto& agent : agents) {
      std::cin >> agent;
    }
  }

  void Calculate() {
    size_t index = 1;
    for (auto& agent : agents) {
      if (agent.find("FBI") != std::string::npos) {
        results.emplace_back(index);
      }
      ++index;
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << " ";
    }

    if (results.empty()) {
      std::cout << "HE GOT AWAY!";
    }
  }

 private:
  std::vector<std::string> agents;
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  FBI fbi;
  fbi.SetInputs();
  fbi.Calculate();
  fbi.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2857_FBI_H_
