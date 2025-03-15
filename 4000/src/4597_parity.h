#ifndef BOJ_4000_SRC_4597_PARITY_H_
#define BOJ_4000_SRC_4597_PARITY_H_

#include <iostream>
#include <string>

class Parity {
 public:
  void SetInputs() {}

  void Calculate() {
    std::string number;
    std::cin >> number;
    int count;

    while (number != "#") {
      count = 0;
      auto target = number[number.size() - 1];
      number.pop_back();
      auto index = number.find('1', 0);
      while (index != std::string::npos) {
        count++;
        index = number.find('1', index + 1);
      }

      if (count & 1) {
        if (target == 'e') {
          number.push_back('1');
        } else {
          number.push_back('0');
        }
      } else {
        if (target == 'e') {
          number.push_back('0');
        } else {
          number.push_back('1');
        }
      }
      std::cout << number << "\n";
      std::cin >> number;
    }
  }

  void PrintResult() {}
};

#ifdef BOJ_SUBMIT
int main() {
  Parity parity;
  parity.SetInputs();
  parity.Calculate();
  parity.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_4000_SRC_4597_PARITY_H_
