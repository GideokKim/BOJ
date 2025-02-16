#ifndef BOJ_TEMPLATE_SRC_SRC_TEMPLATE_H_
#define BOJ_TEMPLATE_SRC_SRC_TEMPLATE_H_

#include <iostream>
#include <set>

class SrcTemplate {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;

    long long x, y;
    for (size_t index = 0; index < n; ++index) {
      std::cin >> x >> y;
      plus_line_points.insert(x - y);
      minus_line_points.insert(x + y);
    }
  }

  void Calculate() {
    std::set<long long> x_line_points(plus_line_points);
    x_line_points.insert(minus_line_points.begin(), minus_line_points.end());
    result = x_line_points.size() +
             plus_line_points.size() * minus_line_points.size();

    long long index = 0;
    for (auto target_point : plus_line_points) {
      std::set<long long> delete_points;
      for (auto target_point2 : minus_line_points) {
        if (target_point >= target_point2) {
          result -= (plus_line_points.size() - index);
          delete_points.insert(target_point2);
        } else {
          break;
        }
      }
      for (auto delete_point : delete_points) {
        minus_line_points.erase(delete_point);
      }
      index++;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::set<long long> plus_line_points;
  std::set<long long> minus_line_points;
  long long result;
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
