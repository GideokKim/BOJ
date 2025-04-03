#ifndef BOJ_11000_SRC_11195_PERAGRAMS_H_
#define BOJ_11000_SRC_11195_PERAGRAMS_H_

#include <iostream>
#include <vector>

class Peragrams {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    result = 0;
    std::vector<int> count(26, 0);
    for (char c : input) {
      count[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
      if (count[i] % 2 == 1) {
        result++;
      }
    }

    if (result < 2) {
      result = 0;
    } else {
      result--;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Peragrams peragrams;
  peragrams.SetInputs();
  peragrams.Calculate();
  peragrams.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11195_PERAGRAMS_H_
