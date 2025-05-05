#ifndef BOJ_14000_SRC_14916_CHANGE_H_
#define BOJ_14000_SRC_14916_CHANGE_H_

#include <iostream>

class Change {
 public:
  void SetInputs() { std::cin >> change; }

  void Calculate() {
    if (change == 1 || change == 3) {
      result = -1;
      return;
    }
    result = change / 5;
    change %= 5;
    result += change / 2;
    if (change % 2 == 1) {
      result += 2;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  long long change;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Change change;
  change.SetInputs();
  change.Calculate();
  change.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14916_CHANGE_H_
