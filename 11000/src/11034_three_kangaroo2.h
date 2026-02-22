#ifndef BOJ_11000_SRC_11034_THREE_KANGAROO2_H_
#define BOJ_11000_SRC_11034_THREE_KANGAROO2_H_

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class ThreeKangaroo2 {
 public:
  void SetInputs() {
    std::string input;
    while (std::getline(std::cin, input)) {
      std::stringstream ss(input);
      std::vector<int> target(3, 0);
      ss >> target[0] >> target[1] >> target[2];
      kangaroos.emplace_back(target);
    }
  }

  void Calculate() {
    for (auto target : kangaroos) {
      auto a = target[0];
      auto b = target[1];
      auto c = target[2];
      int max_move = b - a > c - b ? b - a : c - b;
      --max_move;
      results.push_back(max_move);
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << "\n";
    }
  };

 private:
  std::vector<std::vector<int>> kangaroos;
  std::vector<int> results;
};

#ifdef BOJ_SUBMIT
int main() {
  ThreeKangaroo2 three_kangaroo2;
  three_kangaroo2.SetInputs();
  three_kangaroo2.Calculate();
  three_kangaroo2.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11034_THREE_KANGAROO2_H_
