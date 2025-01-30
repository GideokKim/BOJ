#ifndef BOJ_5000_SRC_5597_WHO_DIDNT_TURN_IN_REPORT_H_
#define BOJ_5000_SRC_5597_WHO_DIDNT_TURN_IN_REPORT_H_

#include <iostream>
#include <set>

class WhoDidntTurnInReport {
 public:
  void SetInputs() {
    student_numbers.clear();
    for (size_t index = 0; index < 30; ++index) {
      student_numbers.insert(index + 1);
    }
  }

  void Calculate() {
    size_t number;
    for (size_t index = 0; index < 28; ++index) {
      std::cin >> number;
      student_numbers.erase(number);
    }
  }

  void PrintResult() {
    for (size_t number : student_numbers) {
      std::cout << number << "\n";
    }
  }

 private:
  std::set<size_t> student_numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  WhoDidntTurnInReport who_didnt_turn_in_report;
  who_didnt_turn_in_report.SetInputs();
  who_didnt_turn_in_report.Calculate();
  who_didnt_turn_in_report.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5597_WHO_DIDNT_TURN_IN_REPORT_H_
