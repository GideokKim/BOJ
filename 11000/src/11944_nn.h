#ifndef BOJ_11000_SRC_11944_NN_H_
#define BOJ_11000_SRC_11944_NN_H_

#include <iostream>
#include <string>

class NN {
 public:
  void SetInputs() { std::cin >> n >> m; }

  void Calculate() {
    std::string n_str = std::to_string(n);
    for (size_t i = 0; i < n; ++i) {
      result.append(n_str);
    }
    if (result.size() > m) {
      result.erase(m);
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  NN nn;
  nn.SetInputs();
  nn.Calculate();
  nn.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11944_NN_H_
