#ifndef BOJ_30000_SRC_30822_COUNT_UOSPC_H_
#define BOJ_30000_SRC_30822_COUNT_UOSPC_H_

#include <iostream>
#include <map>
#include <string>

class CountUospc {
 public:
  void SetInputs() {
    std::cin >> n;
    std::cin >> input_string;
  }

  void Calculate() {
    for (size_t i = 0; i < n; ++i) {
      char_count[input_string[i]]++;
    }

    result = char_count['u'];
    if (char_count['o'] < result) {
      result = char_count['o'];
    }
    if (char_count['s'] < result) {
      result = char_count['s'];
    }
    if (char_count['p'] < result) {
      result = char_count['p'];
    }
    if (char_count['c'] < result) {
      result = char_count['c'];
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::string input_string;
  std::map<char, size_t> char_count;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  CountUospc count_uospc;
  count_uospc.SetInputs();
  count_uospc.Calculate();
  count_uospc.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30822_COUNT_UOSPC_H_
