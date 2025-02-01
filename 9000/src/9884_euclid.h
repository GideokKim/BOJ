#ifndef BOJ_9000_SRC_9884_EUCLID_H_
#define BOJ_9000_SRC_9884_EUCLID_H_

#include <algorithm>
#include <iostream>

class Euclid {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() {
    while (a != b) {
      if (a > b) {
        a -= b;
      } else {
        b -= a;
      }
    }
    result = a;
  }

  void PrintResult() { std::cout << result; }

 private:
  int a, b;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Euclid euclid;
  euclid.SetInputs();
  euclid.Calculate();
  euclid.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9884_EUCLID_H_
