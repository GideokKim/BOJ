#ifndef BOJ_TEMPLATE_SRC_SRC_TEMPLATE_H_
#define BOJ_TEMPLATE_SRC_SRC_TEMPLATE_H_

#include <iostream>
#include <string>
#include <vector>

class SrcTemplate {
 public:
  void SetInputs() {
    std::cin >> n >> k;
    a_vec.resize(n, 0);

    for (size_t index = 0; index < n; ++index) {
      std::cin >> a_vec[index];
    }
    std::cin >> q;
  }

  void Calculate() {
    int query_type;
    size_t start, end;
    for (size_t index = 0; index < q; ++index) {
      std::cin >> query_type >> start >> end;
      if (query_type == 1) {
        for (size_t target_index = start - 1; target_index < end;
             ++target_index) {
          a_vec[target_index]++;
        }
      } else {
        long long sum = 0;
        for (size_t target_index = start - 1; target_index < end;
             ++target_index) {
          a_vec[target_index] %= k;
          sum += a_vec[target_index];
        }
        std::cout << sum << "\n";
      }
    }
  }

  void PrintResult() {}

 private:
  long long k;
  size_t n, q;
  std::vector<long long> a_vec;
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
