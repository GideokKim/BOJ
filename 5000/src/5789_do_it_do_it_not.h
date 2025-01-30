#ifndef BOJ_5000_SRC_5789_DO_IT_DO_IT_NOT_H_
#define BOJ_5000_SRC_5789_DO_IT_DO_IT_NOT_H_

#include <iostream>
#include <string>
#include <vector>

class DoItDoItNot {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    results.clear();
    std::string input;
    for (size_t index = 0; index < n; ++index) {
      std::cin >> input;
      if (input[input.size() / 2] == input[input.size() / 2 - 1]) {
        results.push_back(true);
      } else {
        results.push_back(false);
      }
    }
  }

  void PrintResult() {
    for (size_t index = 0; index < results.size(); ++index) {
      std::cout << (results[index] ? "Do-it" : "Do-it-Not") << "\n";
    }
  }

 private:
  size_t n;
  std::vector<bool> results;
};

#ifdef BOJ_SUBMIT
int main() {
  DoItDoItNot do_it_do_it_not;
  do_it_do_it_not.SetInputs();
  do_it_do_it_not.Calculate();
  do_it_do_it_not.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5789_DO_IT_DO_IT_NOT_H_
