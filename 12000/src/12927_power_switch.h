#ifndef BOJ_12000_SRC_12927_POWER_SWITCH_H_
#define BOJ_12000_SRC_12927_POWER_SWITCH_H_

#include <iostream>
#include <string>
#include <vector>

class PowerSwitch {
 public:
  void SetInputs() {
    std::string switches_string;
    std::cin >> switches_string;
    switches.resize(switches_string.size());
    for (size_t i = 0; i < switches_string.size(); ++i) {
      switches[i] = switches_string[i] == 'Y';
    }
  }

  void Calculate() {
    result = 0;
    for (int index = 0; index < switches.size(); ++index) {
      if (switches[index]) {
        result++;
        for (int i = index; i < switches.size(); i += index + 1) {
          switches[i] = !switches[i];
        }
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<bool> switches;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  PowerSwitch power_switch;
  power_switch.SetInputs();
  power_switch.Calculate();
  power_switch.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_12000_SRC_12927_POWER_SWITCH_H_
