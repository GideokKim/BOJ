#ifndef BOJ_31000_SRC_31612_STROKE_COUNT_H_
#define BOJ_31000_SRC_31612_STROKE_COUNT_H_

#include <iostream>

class StrokeCount {
 public:
  void SetInputs() { std::cin >> n >> s; }

  void Calculate() {
    result = 0;
    for (auto c : s) {
      result += c == 'o' ? 1 : 2;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::string s;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  StrokeCount stroke_count;
  stroke_count.SetInputs();
  stroke_count.Calculate();
  stroke_count.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31612_STROKE_COUNT_H_