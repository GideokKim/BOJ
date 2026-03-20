#ifndef BOJ_34000_SRC_34522_DIDIMDOL_SCHOLARSHIP_H_
#define BOJ_34000_SRC_34522_DIDIMDOL_SCHOLARSHIP_H_

#include <iostream>
#include <string>
#include <tuple>
#include <vector>

class DidimdolScholarship {
 public:
  void SetInputs() {
    scholarships.resize(11);

    for (size_t i = 0; i < 11; ++i) {
      std::cin >> scholarships[i];
    }

    size_t n;
    std::cin >> n;
    student_infos.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> std::get<0>(student_infos[i]) >>
          std::get<1>(student_infos[i]) >> std::get<2>(student_infos[i]);
    }
  }

  void Calculate() {
    result = 0;
    for (const auto& student_info : student_infos) {
      if (std::get<1>(student_info) >= "2.00" &&
          std::get<2>(student_info) >= 17) {
        result += scholarships[std::get<0>(student_info)];
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<size_t> scholarships;
  std::vector<std::tuple<size_t, std::string, size_t>> student_infos;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  DidimdolScholarship didimdol_scholarship;
  didimdol_scholarship.SetInputs();
  didimdol_scholarship.Calculate();
  didimdol_scholarship.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34522_DIDIMDOL_SCHOLARSHIP_H_
