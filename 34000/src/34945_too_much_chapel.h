#ifndef BOJ_34000_SRC_34945_TOO_MUCH_CHAPEL_H_
#define BOJ_34000_SRC_34945_TOO_MUCH_CHAPEL_H_

#include <iostream>

class TooMuchChapel {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() { result = n < 6 ? "Oh My God!" : "Success!"; }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  TooMuchChapel too_much_chapel;
  too_much_chapel.SetInputs();
  too_much_chapel.Calculate();
  too_much_chapel.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34945_TOO_MUCH_CHAPEL_H_
