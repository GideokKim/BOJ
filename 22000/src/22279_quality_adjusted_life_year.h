#ifndef BOJ_21000_SRC_22279_QUALITY_ADJUSTED_LIFE_YEAR_H_
#define BOJ_21000_SRC_22279_QUALITY_ADJUSTED_LIFE_YEAR_H_

#include <iomanip>
#include <iostream>
#include <vector>

class QualityAdjustedLifeYear {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    q.resize(n);
    y.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> q[i] >> y[i];
    }
  }

  void Calculate() {
    result = 0.0;

    for (size_t i = 0; i < q.size(); ++i) {
      result += q[i] * y[i];
    }
  }

  void PrintResult() {
    std::cout << std::fixed << std::setprecision(3) << result;
  }

 private:
  std::vector<double> q;
  std::vector<double> y;
  double result;
};

#ifdef BOJ_SUBMIT
int main() {
  QualityAdjustedLifeYear quality_adjusted_life_year;
  quality_adjusted_life_year.SetInputs();
  quality_adjusted_life_year.Calculate();
  quality_adjusted_life_year.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_21000_SRC_22279_QUALITY_ADJUSTED_LIFE_YEAR_H_
