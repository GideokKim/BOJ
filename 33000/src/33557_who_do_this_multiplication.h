#ifndef BOJ_33000_SRC_33557_WHO_DO_THIS_MULTIPLICATION_H_
#define BOJ_33000_SRC_33557_WHO_DO_THIS_MULTIPLICATION_H_

#include <iostream>
#include <string>
#include <vector>

class WhoDoThisMultiplication {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    test_case.resize(t);

    long long a, b;
    for (size_t i = 0; i < t; ++i) {
      std::cin >> a >> b;
      if (a < b) {
        long long temp = a;
        a = b;
        b = temp;
      }
      test_case[i] = std::pair<long long, long long>(a, b);
    }
  }

  void Calculate() {
    std::string a, b;
    std::string wrong_answer_str;
    for (auto target : test_case) {
      std::string answer_str = std::to_string(target.first * target.second);
      a = std::to_string(target.first);
      b = std::to_string(target.second);
      size_t remainder = a.size() - b.size();
      wrong_answer_str = a.substr(0, remainder);
      for (size_t i = 0; i < b.size(); ++i) {
        auto target_a = a[i + remainder] - '0';
        auto target_b = b[i] - '0';
        wrong_answer_str += std::to_string(target_a * target_b);
      }

      if (answer_str == wrong_answer_str) {
        results.emplace_back(1);
      } else {
        results.emplace_back(0);
      }
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<std::pair<long long, long long>> test_case;
  std::vector<int> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  WhoDoThisMultiplication who_do_this_multiplication;
  who_do_this_multiplication.SetInputs();
  who_do_this_multiplication.Calculate();
  who_do_this_multiplication.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33557_WHO_DO_THIS_MULTIPLICATION_H_
