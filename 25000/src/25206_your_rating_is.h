#ifndef BOJ_25000_SRC_25206_YOUR_RATING_IS_H_
#define BOJ_25000_SRC_25206_YOUR_RATING_IS_H_

#include <iostream>
#include <string>
#include <vector>

class YourRatingIs {
 public:
  void set_inputs() {
    std::string subject;
    double credit;
    std::string grade;
    for (int i = 0; i < 20; i++) {
      std::cin >> subject >> credit >> grade;
      if (grade == "P") {
        continue;
      }
      credits_.push_back(credit);
      grades_.push_back(grade);
    }
  }

  void set_grade_scores() {
    for (const auto& grade_score : grades_) {
      if (grade_score == "P") {
        continue;
      } else if (grade_score == "F") {
        grade_scores_.push_back(0.0);
      } else if (grade_score == "A+") {
        grade_scores_.push_back(4.5);
      } else if (grade_score == "A0") {
        grade_scores_.push_back(4.0);
      } else if (grade_score == "B+") {
        grade_scores_.push_back(3.5);
      } else if (grade_score == "B0") {
        grade_scores_.push_back(3.0);
      } else if (grade_score == "C+") {
        grade_scores_.push_back(2.5);
      } else if (grade_score == "C0") {
        grade_scores_.push_back(2.0);
      } else if (grade_score == "D+") {
        grade_scores_.push_back(1.5);
      } else if (grade_score == "D0") {
        grade_scores_.push_back(1.0);
      }
    }
  }

  double calculate() {
    double sum = 0;
    double credits_sum = 0;
    for (size_t i = 0; i < grade_scores_.size(); i++) {
      sum += grade_scores_[i] * credits_[i];
      credits_sum += credits_[i];
    }

    return sum / credits_sum;
  }

 private:
  std::vector<double> credits_;
  std::vector<std::string> grades_;
  std::vector<double> grade_scores_;
};

#ifdef BOJ_SUBMIT
int main() {
  YourRatingIs your_rating_is;
  your_rating_is.set_inputs();
  your_rating_is.set_grade_scores();
  double result = your_rating_is.calculate();

  std::cout << result << '\n';

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25206_YOUR_RATING_IS_H_
