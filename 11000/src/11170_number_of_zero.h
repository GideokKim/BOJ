#ifndef BOJ_11000_SRC_11170_NUMBER_OF_ZERO_H_
#define BOJ_11000_SRC_11170_NUMBER_OF_ZERO_H_

#include <iostream>
#include <string>
#include <vector>

class NumberOfZero {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    n_list.resize(t);
    m_list.resize(t);

    for (size_t i = 0; i < t; ++i) {
      std::cin >> n_list[i] >> m_list[i];
    }
  }

  void Calculate() {
    for (size_t index = 0; index < n_list.size(); ++index) {
      size_t count = 0;
      for (size_t num = n_list[index]; num <= m_list[index]; ++num) {
        std::string num_str = std::to_string(num);
        for (auto target : num_str) {
          if (target == '0') {
            ++count;
          }
        }
      }
      results.push_back(count);
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < results.size(); ++i) {
      std::cout << results[i] << "\n";
    }
  };

 private:
  std::vector<size_t> n_list;
  std::vector<size_t> m_list;
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  NumberOfZero number_of_zero;
  number_of_zero.SetInputs();
  number_of_zero.Calculate();
  number_of_zero.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11170_NUMBER_OF_ZERO_H_
