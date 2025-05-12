#ifndef BOJ_33000_SRC_33679_CONFRONTATION_H_
#define BOJ_33000_SRC_33679_CONFRONTATION_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Confrontation {
 public:
  void SetInputs() {
    std::cin >> n;
    a.resize(n);
    b.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> a[i];
    }
    for (size_t i = 0; i < n; ++i) {
      std::cin >> b[i];
    }
  }

  void Calculate() {
    max_a_lis = 0;
    max_b_lis = 0;

    for (size_t start = 0; start < n; ++start) {
      a_lis.clear();
      b_lis.clear();
      a_lis.push_back(a[start]);
      b_lis.push_back(b[start]);

      for (size_t i = start; i < n + start; ++i) {
        size_t index = i % n;
        if (a_lis.back() < a[index]) {
          a_lis.push_back(a[index]);
        } else if (a_lis.back() > a[index]) {
          auto iter = std::lower_bound(a_lis.begin(), a_lis.end(), a[index]);
          *iter = a[index];
        }
        if (b_lis.back() < b[index]) {
          b_lis.push_back(b[index]);
        } else if (b_lis.back() > b[index]) {
          auto iter = std::lower_bound(b_lis.begin(), b_lis.end(), b[index]);
          *iter = b[index];
        }
      }
      max_a_lis = std::max(max_a_lis, a_lis.size());
      max_b_lis = std::max(max_b_lis, b_lis.size());
    }

    if (max_a_lis > max_b_lis) {
      result = "YJ Win!";
    } else if (max_a_lis < max_b_lis) {
      result = "HG Win!";
    } else {
      result = "Both Win!";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::vector<long long> a;
  std::vector<long long> b;
  std::vector<long long> a_lis;
  std::vector<long long> b_lis;
  size_t max_a_lis, max_b_lis;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Confrontation confrontation;
  confrontation.SetInputs();
  confrontation.Calculate();
  confrontation.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33679_CONFRONTATION_H_
