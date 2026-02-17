#ifndef BOJ_34000_SRC_34849_TWICE_FOR_STATEMENT_H_
#define BOJ_34000_SRC_34849_TWICE_FOR_STATEMENT_H_

#include <iostream>
#include <string>

class TwiceForStatement {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result = n * n > 100000000 ? "Time limit exceeded" : "Accepted";
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  TwiceForStatement twice_for_statement;
  twice_for_statement.SetInputs();
  twice_for_statement.Calculate();
  twice_for_statement.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34849_TWICE_FOR_STATEMENT_H_
