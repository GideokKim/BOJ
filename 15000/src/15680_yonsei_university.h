#ifndef BOJ_15000_SRC_15680_YONSEI_UNIVERSITY_H_
#define BOJ_15000_SRC_15680_YONSEI_UNIVERSITY_H_

#include <iostream>
#include <string>

class YonseiUniversity {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    if (n == 0) {
      result = "YONSEI";
    } else {
      result = "Leading the Way to the Future";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int n;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  YonseiUniversity yonsei_university;
  yonsei_university.SetInputs();
  yonsei_university.Calculate();
  yonsei_university.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15680_YONSEI_UNIVERSITY_H_
