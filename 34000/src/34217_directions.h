#ifndef BOJ_34000_SRC_34217_DIRECTIONS_H_
#define BOJ_34000_SRC_34217_DIRECTIONS_H_

#include <iostream>
#include <string>

class Directions {
 public:
  void SetInputs() { std::cin >> a >> b >> c >> d; }

  void Calculate() {
    result = a + c < b + d ? "Hanyang Univ." : "Yongdap";

    if (a + c == b + d) {
      result = "Either";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  long long a, b, c, d;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  Directions directions;
  directions.SetInputs();
  directions.Calculate();
  directions.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34217_DIRECTIONS_H_
