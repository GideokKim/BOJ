#ifndef BOJ_TEMPLATE_SRC_SRC_TEMPLATE_H_
#define BOJ_TEMPLATE_SRC_SRC_TEMPLATE_H_

#include <iostream>
#include <string>
#include <vector>

class SrcTemplate {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    a_vec.resize(m, 0);
    b_vec.resize(m, 0);

    for (size_t index = 0; index < m; ++index) {
      std::cin >> a_vec[index] >> b_vec[index];
    }
    is_possible = true;
    x_used.resize(n, false);
    result.resize(m, std::string(n, 'X'));
  }

  void Calculate() {
    int sum = 0;
    size_t next_changable_index = 0;
    for (size_t index = 0; index < m; ++index) {
      if (a_vec[index] + b_vec[index] > n) {
        is_possible = false;
        return;
      }
      sum += (a_vec[index] + b_vec[index]);
    }
    if (sum > n * (m - 1)) {
      is_possible = false;
      return;
    }

    for (size_t index = 0; index < m; ++index) {
      auto& target = result[index];
      target[0] = '+';
      target.replace(0, a_vec[index], std::string(a_vec[index], '+'));
      target.replace(a_vec[index], b_vec[index],
                     std::string(b_vec[index], '-'));
      for (size_t target_index = 0; target_index < n; ++target_index) {
        if (target[target_index] == 'X') {
          if (x_used[target_index]) {
            if (next_changable_index >= n) {
              target[target_index] = '-';
              continue;
            }
            auto temp = target[target_index];
            target[target_index] = target[next_changable_index];
            target[next_changable_index] = temp;
            x_used[next_changable_index] = true;
            next_changable_index++;
            while (x_used[next_changable_index]) {
              next_changable_index++;
            }
          } else {
            x_used[target_index] = true;
          }
        }
      }
    }
  }

  void PrintResult() {
    if (!is_possible) {
      std::cout << "NO\n";
    } else {
      std::cout << "YES\n";
      for (size_t index = 0; index < n; ++index) {
        for (size_t target_index = 0; target_index < m; ++target_index) {
          std::cout << result[target_index][index];
        }
        std::cout << "\n";
      }
    }
  }

 private:
  int n, m;
  std::vector<int> a_vec, b_vec;
  bool is_possible;
  std::vector<std::string> result;
  std::vector<bool> x_used;
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
