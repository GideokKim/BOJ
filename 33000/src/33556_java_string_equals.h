#ifndef BOJ_33000_SRC_33556_JAVA_STRING_EQUALS_H_
#define BOJ_33000_SRC_33556_JAVA_STRING_EQUALS_H_

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

class JavaStringEquals {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() {
    result1 = -1;
    result2 = -1;
    if (a == "null") {
      return;
    }

    if (b == "null") {
      result1 = 0;
      result2 = 0;
      return;
    }

    if (a == b) {
      result1 = 1;
    } else {
      result1 = 0;
    }

    std::transform(a.begin(), a.end(), a.begin(), ::tolower);
    std::transform(b.begin(), b.end(), b.begin(), ::tolower);
    if (a == b) {
      result2 = 1;
    } else {
      result2 = 0;
    }
  }

  void PrintResult() {
    if (result1 == -1) {
      std::cout << "NullPointerException\nNullPointerException";
    } else {
      if (result1) {
        std::cout << "true\n";
      } else {
        std::cout << "false\n";
      }

      if (result2) {
        std::cout << "true";
      } else {
        std::cout << "false";
      }
    }
  }

 private:
  std::string a, b;
  int result1, result2;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  JavaStringEquals java_string_equals;
  java_string_equals.SetInputs();
  java_string_equals.Calculate();
  java_string_equals.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33556_JAVA_STRING_EQUALS_H_
