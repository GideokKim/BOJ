#ifndef BOJ_30000_SRC_30328_JAVA_WARRIORS_H_
#define BOJ_30000_SRC_30328_JAVA_WARRIORS_H_

#include <iostream>
#include <vector>

class JavaWarriors {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() { result = n * 4000; }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  JavaWarriors java_warriors;
  java_warriors.SetInputs();
  java_warriors.Calculate();
  java_warriors.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30328_JAVA_WARRIORS_H_
