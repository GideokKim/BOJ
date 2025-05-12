#ifndef BOJ_27000_SRC_27889_SPECIAL_SCHOOL_NAME_H_
#define BOJ_27000_SRC_27889_SPECIAL_SCHOOL_NAME_H_

#include <iostream>
#include <string>

class SpecialSchoolName {
 public:
  void SetInputs() { std::cin >> target_string; }

  void Calculate() {
    if (target_string == "NLCS") {
      result = "North London Collegiate School";
    } else if (target_string == "BHA") {
      result = "Branksome Hall Asia";
    } else if (target_string == "KIS") {
      result = "Korea International School";
    } else if (target_string == "SJA") {
      result = "St. Johnsbury Academy";
    }
  }

  void PrintResult() const { std::cout << result; }

 private:
  std::string target_string;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  SpecialSchoolName special_school_name;
  special_school_name.SetInputs();
  special_school_name.Calculate();
  special_school_name.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27889_SPECIAL_SCHOOL_NAME_H_
