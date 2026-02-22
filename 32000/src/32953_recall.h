#ifndef BOJ_32000_SRC_32953_RECALL_H_
#define BOJ_32000_SRC_32953_RECALL_H_

#include <algorithm>
#include <iostream>
#include <map>

class Recall {
 public:
  void SetInputs() {
    std::cin >> n >> m;

    size_t student_count;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> student_count;
      long long student_id;
      for (size_t j = 0; j < student_count; ++j) {
        std::cin >> student_id;
        ++students[student_id];
      }
    }
  }

  void Calculate() {
    result = 0;
    for (auto student : students) {
      if (student.second >= m) {
        ++result;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  std::map<long long, size_t> students;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Recall recall;
  recall.SetInputs();
  recall.Calculate();
  recall.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32953_RECALL_H_
