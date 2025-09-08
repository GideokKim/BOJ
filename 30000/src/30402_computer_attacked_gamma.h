#ifndef BOJ_30000_SRC_30402_COMPUTER_ATTACKED_GAMMA_H_
#define BOJ_30000_SRC_30402_COMPUTER_ATTACKED_GAMMA_H_

#include <iostream>
#include <set>
#include <string>

class ComputerAttackedGamma {
 public:
  void SetInputs() {
    char target;
    for (size_t i = 0; i < 225; ++i) {
      std::cin >> target;
      inputs.insert(target);
    }
  }

  void Calculate() {
    result = "yeongcheol";
    if (inputs.find('w') != inputs.end()) {
      result = "chunbae";
    } else if (inputs.find('b') != inputs.end()) {
      result = "nabi";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::set<char> inputs;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  ComputerAttackedGamma computer_attacked_gamma;
  computer_attacked_gamma.SetInputs();
  computer_attacked_gamma.Calculate();
  computer_attacked_gamma.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30402_COMPUTER_ATTACKED_GAMMA_H_
