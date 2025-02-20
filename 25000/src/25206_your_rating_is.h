#ifndef BOJ_25000_SRC_25206_YOUR_RATING_IS_H_
#define BOJ_25000_SRC_25206_YOUR_RATING_IS_H_

#include <iostream>
#include <string>
#include <vector>

class YourRatingIs {
 public:
  void SetInputs() {
    std::string subject;
    double credit;
    std::string grade;
    for (int i = 0; i < 20; i++) {
      std::cin >> subject >> credit >> grade;
      if (grade == "P") {
        continue;
      }
      credits.push_back(credit);
      grades.push_back(grade);
    }

    for (const auto& grade_score : grades) {
      if (grade_score == "P") {
        continue;
      } else if (grade_score == "F") {
        grade_scores.push_back(0.0);
      } else if (grade_score == "A+") {
        grade_scores.push_back(4.5);
      } else if (grade_score == "A0") {
        grade_scores.push_back(4.0);
      } else if (grade_score == "B+") {
        grade_scores.push_back(3.5);
      } else if (grade_score == "B0") {
        grade_scores.push_back(3.0);
      } else if (grade_score == "C+") {
        grade_scores.push_back(2.5);
      } else if (grade_score == "C0") {
        grade_scores.push_back(2.0);
      } else if (grade_score == "D+") {
        grade_scores.push_back(1.5);
      } else if (grade_score == "D0") {
        grade_scores.push_back(1.0);
      }
    }
  }

  void Calculate() {
    double sum = 0;
    double credits_sum = 0;
    for (size_t i = 0; i < grade_scores.size(); i++) {
      sum += grade_scores[i] * credits[i];
      credits_sum += credits[i];
    }

    result = sum / credits_sum;
  }

  void PrintResult() {
    std::cout.precision(6);
    std::cout << std::fixed << result;
  }

 private:
  std::vector<double> credits;
  std::vector<std::string> grades;
  std::vector<double> grade_scores;
  double result;
};

#ifdef BOJ_SUBMIT
int main() {
  YourRatingIs your_rating_is;
  your_rating_is.SetInputs();
  your_rating_is.Calculate();
  your_rating_is.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25206_YOUR_RATING_IS_H_
