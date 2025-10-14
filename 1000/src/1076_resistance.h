#ifndef BOJ_1000_SRC_1076_RESISTANCE_H_
#define BOJ_1000_SRC_1076_RESISTANCE_H_

#include <iostream>
#include <string>
#include <vector>

class Resistance {
 public:
  void SetInputs() {
    inputs.resize(3);

    std::cin >> inputs[0] >> inputs[1] >> inputs[2];

    color.resize(10);
    color[0] = "black";
    color[1] = "brown";
    color[2] = "red";
    color[3] = "orange";
    color[4] = "yellow";
    color[5] = "green";
    color[6] = "blue";
    color[7] = "violet";
    color[8] = "grey";
    color[9] = "white";
  }

  void Calculate() {
    result = "";

    for (size_t idx = 0; idx < inputs.size(); ++idx) {
      const auto& target = inputs[idx];
      for (size_t i = 0; i < color.size(); ++i) {
        if (target == color[i]) {
          if (idx == 2) {
            result += std::string(i, '0');
          } else {
            result += std::to_string(i);
          }

          if (result[0] == '0') {
            result = "";
          }
        }
      }
    }

    if (result.empty()) {
      result = "0";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::string> inputs;
  std::vector<std::string> color;
  std::string result;
};

#ifdef BOJ_SUBMIT

int main() {
  Resistance resistance;
  resistance.SetInputs();
  resistance.Calculate();
  resistance.PrintResult();

  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1076_RESISTANCE_H_
