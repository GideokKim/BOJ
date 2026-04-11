#ifndef BOJ_34000_SRC_34584_TAKE_IT_OR_DOUBLE_IT_H_
#define BOJ_34000_SRC_34584_TAKE_IT_OR_DOUBLE_IT_H_

#include <iostream>
#include <string>

class TakeItOrDoubleIt {
 public:
  void SetInputs() { std::cin >> x >> d; }

  void Calculate() { result = d / x >= 2 ? "double it" : "take it"; }

  void PrintResult() { std::cout << result; }

 private:
  long long x, d;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  TakeItOrDoubleIt take_it_or_double_it;
  take_it_or_double_it.SetInputs();
  take_it_or_double_it.Calculate();
  take_it_or_double_it.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34584_TAKE_IT_OR_DOUBLE_IT_H_
