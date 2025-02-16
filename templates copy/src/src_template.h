#ifndef BOJ_TEMPLATE_SRC_SRC_TEMPLATE_H_
#define BOJ_TEMPLATE_SRC_SRC_TEMPLATE_H_

#include <iostream>
#include <vector>

class SrcTemplate {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    n_vec.resize(t, 0);
    bool_result.resize(t, true);

    for (size_t index = 0; index < t; ++index) {
      std::cin >> n_vec[index];
    }
  }

  void Calculate() {
    for (auto n : n_vec) {
      std::vector<int> numbers;
      numbers.resize(n, 0);
      for (int index = 0; index < n; ++index) {
        numbers[index] = index + 1;
      }
      numbers_result.push_back(numbers);
    }
  }

  void PrintResult() {
    size_t index = 0;
    for (auto is_print : bool_result) {
      std::cout << (is_print ? "YES" : "NO") << "\n";
      if (is_print) {
        for (auto number : numbers_result[index]) {
          std::cout << number << " ";
        }
        std::cout << "\n";
        ++index;
      }
    }
  }

 private:
  std::vector<int> n_vec;
  std::vector<bool> bool_result;
  std::vector<std::vector<int>> numbers_result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  SrcTemplate src_template;
  src_template.SetInputs();
  src_template.Calculate();
  src_template.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_TEMPLATE_SRC_SRC_TEMPLATE_H_
