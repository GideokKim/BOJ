#ifndef BOJ_11000_SRC_11943_MOVE_FILES_H_
#define BOJ_11000_SRC_11943_MOVE_FILES_H_

#include <iostream>
#include <string>
#include <vector>

class MoveFiles {
 public:
  void SetInputs() { std::cin >> a >> b >> c >> d; }

  void Calculate() { result = a + d > b + c ? b + c : a + d; }

  void PrintResult() { std::cout << result; }

 private:
  size_t a, b, c, d;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  MoveFiles move_files;
  move_files.SetInputs();
  move_files.Calculate();
  move_files.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11943_MOVE_FILES_H_
