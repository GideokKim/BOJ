#ifndef BOJ_2000_SRC_2754_CALCULATE_SCORE_H_
#define BOJ_2000_SRC_2754_CALCULATE_SCORE_H_

#include <iostream>
#include <string>

class CalculateScore {
 public:
  void SetInputs() { std::cin >> score; }

  void Calculate() {
    if (score == "A+") {
      result = "4.3";
    } else if (score == "A0") {
      result = "4.0";
    } else if (score == "A-") {
      result = "3.7";
    } else if (score == "B+") {
      result = "3.3";
    } else if (score == "B0") {
      result = "3.0";
    } else if (score == "B-") {
      result = "2.7";
    } else if (score == "C+") {
      result = "2.3";
    } else if (score == "C0") {
      result = "2.0";
    } else if (score == "C-") {
      result = "1.7";
    } else if (score == "D+") {
      result = "1.3";
    } else if (score == "D0") {
      result = "1.0";
    } else if (score == "D-") {
      result = "0.7";
    } else if (score == "F") {
      result = "0.0";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string score;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  CalculateScore calculate_score;
  calculate_score.SetInputs();
  calculate_score.Calculate();
  calculate_score.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2754_CALCULATE_SCORE_H_
