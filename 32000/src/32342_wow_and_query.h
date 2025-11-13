#ifndef BOJ_32000_SRC_32342_WOW_AND_QUERY_H_
#define BOJ_32000_SRC_32342_WOW_AND_QUERY_H_

#include <iostream>
#include <string>
#include <vector>

class WowAndQuery {
 public:
  void SetInputs() {
    std::cin >> q;
    inputs.resize(q);
    results.resize(q);

    for (size_t i = 0; i < q; ++i) {
      std::cin >> inputs[i];
    }
  }

  void Calculate() {
    for (size_t i = 0; i < q; ++i) {
      auto& target = inputs[i];
      size_t count = 0;
      size_t pos = 0;
      while (target.find("WOW", pos) != std::string::npos) {
        pos = target.find("WOW", pos);
        ++pos;
        ++count;
      }
      results[i] = count;
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < q; ++i) {
      std::cout << results[i] << "\n";
    }
  }

 private:
  size_t q;
  std::vector<std::string> inputs;
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  WowAndQuery wow_and_query;
  wow_and_query.SetInputs();
  wow_and_query.Calculate();
  wow_and_query.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32342_WOW_AND_QUERY_H_
