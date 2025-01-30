#ifndef BOJ_21000_SRC_21955_SPLIT_H_
#define BOJ_21000_SRC_21955_SPLIT_H_

#include <iostream>
#include <string>

class Split {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    first_half = n.substr(0, n.size() / 2);
    second_half = n.substr(n.size() / 2);
  }

  void PrintResult() { std::cout << first_half << ' ' << second_half; }

 private:
  std::string n;
  std::string first_half;
  std::string second_half;
};

#ifdef BOJ_SUBMIT
int main() {
  Split split;
  split.SetInputs();
  split.Calculate();
  split.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_21000_SRC_21955_SPLIT_H_
