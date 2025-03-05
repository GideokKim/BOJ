#ifndef BOJ_9000_SRC_9184_FUNCTION_RUN_FUN_H_
#define BOJ_9000_SRC_9184_FUNCTION_RUN_FUN_H_

#include <iostream>
#include <tuple>
#include <vector>

class FunctionRunFun {
 public:
  void SetInputs() {
    dp.resize(21, std::vector<std::vector<long long>>(
                      21, std::vector<long long>(21, 0)));
    while (true) {
      long long a, b, c;
      std::cin >> a >> b >> c;
      if (a == -1 && b == -1 && c == -1) {
        break;
      }
      inputs.push_back(std::make_tuple(a, b, c));
    }
  }

  void Calculate() {
    for (const auto& input : inputs) {
      long long a = std::get<0>(input);
      long long b = std::get<1>(input);
      long long c = std::get<2>(input);

      if (a <= 0 || b <= 0 || c <= 0) {
        a = 0;
        b = 0;
        c = 0;
      }

      if (a > 20 || b > 20 || c > 20) {
        a = 20;
        b = 20;
        c = 20;
      }
      dp[a][b][c] = w(a, b, c);
    }
  }

  void PrintResult() {
    for (const auto& input : inputs) {
      long long a = std::get<0>(input);
      long long b = std::get<1>(input);
      long long c = std::get<2>(input);

      if (a <= 0 || b <= 0 || c <= 0) {
        a = 0;
        b = 0;
        c = 0;
      }

      if (a > 20 || b > 20 || c > 20) {
        a = 20;
        b = 20;
        c = 20;
      }

      std::cout << "w(" << std::get<0>(input) << ", " << std::get<1>(input)
                << ", " << std::get<2>(input) << ") = " << dp[a][b][c] << "\n";
    }
  }

 private:
  long long w(long long a, long long b, long long c) {
    if (a <= 0 || b <= 0 || c <= 0) {
      return 1;
    }
    if (a > 20 || b > 20 || c > 20) {
      return w(20, 20, 20);
    }
    if (dp[a][b][c] != 0) {
      return dp[a][b][c];
    }
    if (a < b && b < c) {
      dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    } else {
      dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) -
                    w(a - 1, b - 1, c - 1);
    }

    return dp[a][b][c];
  }

  std::vector<std::vector<std::vector<long long>>> dp;
  std::vector<std::tuple<long long, long long, long long>> inputs;
};

#ifdef BOJ_SUBMIT
int main() {
  FunctionRunFun function_run_fun;
  function_run_fun.SetInputs();
  function_run_fun.Calculate();
  function_run_fun.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9184_FUNCTION_RUN_FUN_H_
