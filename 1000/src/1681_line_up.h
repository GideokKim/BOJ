#ifndef BOJ_1000_SRC_1681_LINE_UP_H_
#define BOJ_1000_SRC_1681_LINE_UP_H_

#include <iostream>
#include <string>

class LineUp {
 public:
  void SetInputs() { std::cin >> n >> l; }

  void Calculate() {
    result = 0;
    size_t i = 0;
    std::string target;

    while (result < n) {
      ++i;
      target = std::to_string(i);
      if (target.find(l) != std::string::npos) {
        continue;
      } else {
        ++result;
      }
    }

    result = i;
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  char l;
  size_t result;
};

#ifdef BOJ_SUBMIT

int main() {
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  LineUp line_up;
  line_up.SetInputs();
  line_up.Calculate();
  line_up.PrintResult();

  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1681_LINE_UP_H_
