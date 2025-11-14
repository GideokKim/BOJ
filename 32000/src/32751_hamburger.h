#ifndef BOJ_32000_SRC_32751_HAMBURGER_H_
#define BOJ_32000_SRC_32751_HAMBURGER_H_

#include <iostream>
#include <string>
#include <vector>

class Hamburger {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    alphabet.resize(4);
    for (size_t i = 0; i < 4; ++i) {
      std::cin >> alphabet[i];
    }
    std::cin >> input;
  }

  void Calculate() {
    result = "No";
    if (input[0] != 'a' || input.back() != 'a') {
      return;
    }
    for (size_t i = 1; i < input.size(); ++i) {
      if (input[i - 1] == input[i]) {
        return;
      }
      --alphabet[input[i] - 'a'];
    }
    --alphabet[input[0] - 'a'];

    for (size_t i = 0; i < 4; ++i) {
      if (alphabet[i] < 0) {
        return;
      }
    }

    result = "Yes";
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t a, b, c, d;
  std::vector<long long> alphabet;
  std::string input;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Hamburger hamburger;
  hamburger.SetInputs();
  hamburger.Calculate();
  hamburger.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32751_HAMBURGER_H_
