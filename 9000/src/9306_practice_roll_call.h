#ifndef BOJ_9000_SRC_9306_PRACTICE_ROLL_CALL_H_
#define BOJ_9000_SRC_9306_PRACTICE_ROLL_CALL_H_

#include <iostream>
#include <string>
#include <vector>

class PracticeRollCall {
 public:
  void SetInputs() { std::cin >> test_case_count; }

  void Calculate() {
    results.resize(test_case_count, "Case ");
    std::string first_name;
    std::string last_name;
    for (size_t i = 0; i < test_case_count; ++i) {
      std::cin >> first_name >> last_name;
      results[i] +=
          std::to_string(i + 1) + ": " + last_name + ", " + first_name;
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  size_t test_case_count;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  PracticeRollCall practice_roll_call;
  practice_roll_call.SetInputs();
  practice_roll_call.Calculate();
  practice_roll_call.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9306_PRACTICE_ROLL_CALL_H_
