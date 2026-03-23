#ifndef BOJ_28000_SRC_28113_TRANSPORTATION_H_
#define BOJ_28000_SRC_28113_TRANSPORTATION_H_

#include <iostream>
#include <string>

class Transportation {
 public:
  void SetInputs() { std::cin >> n >> a >> b; }

  void Calculate() {
    if (n > b) {
      result = "Bus";
    } else {
      if (a == b) {
        result = "Anything";
      } else {
        result = a < b ? "Bus" : "Subway";
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, a, b;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  Transportation transportation;
  transportation.SetInputs();
  transportation.Calculate();
  transportation.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28224_FINAL_PRICE_H_
