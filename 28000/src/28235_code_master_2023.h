#ifndef BOJ_28000_SRC_28235_CODE_MASTER_2023_H_
#define BOJ_28000_SRC_28235_CODE_MASTER_2023_H_

#include <iostream>
#include <string>

class CodeMaster2023 {
 public:
  void SetInputs() { std::cin >> code; }

  void Calculate() {
    if (code == "SONGDO") {
      result = "HIGHSCHOOL";
    } else if (code == "CODE") {
      result = "MASTER";
    } else if (code == "2023") {
      result = "0611";
    } else if (code == "ALGORITHM") {
      result = "CONTEST";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string code;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  CodeMaster2023 code_master_2023;
  code_master_2023.SetInputs();
  code_master_2023.Calculate();
  code_master_2023.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28235_CODE_MASTER_2023_H_
