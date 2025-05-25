#ifndef BOJ_30000_SRC_30501_FIND_CRIMINAL_H_
#define BOJ_30000_SRC_30501_FIND_CRIMINAL_H_

#include <iostream>
#include <string>
#include <vector>

class FindCriminal {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    criminals.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> criminals[i];
    }
  }

  void Calculate() {
    for (auto& target : criminals) {
      if (target.find("S") != std::string::npos) {
        result = target;
        break;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::string> criminals;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  FindCriminal find_criminal;
  find_criminal.SetInputs();
  find_criminal.Calculate();
  find_criminal.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30501_FIND_CRIMINAL_H_
