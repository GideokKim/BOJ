#ifndef BOJ_33000_SRC_33179_HEZARDASTANS_ANNUAL_REPORT_H_
#define BOJ_33000_SRC_33179_HEZARDASTANS_ANNUAL_REPORT_H_

#include <iostream>

class HezardastansAnnualReport {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result = 0;
    int pages;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> pages;
      pages = pages / 2 + pages % 2;
      result += pages;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  HezardastansAnnualReport hezardastans_annual_report;
  hezardastans_annual_report.SetInputs();
  hezardastans_annual_report.Calculate();
  hezardastans_annual_report.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33179_HEZARDASTANS_ANNUAL_REPORT_H_