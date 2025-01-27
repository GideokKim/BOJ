#ifndef BOJ_21000_SRC_21955_SPLIT_H_
#define BOJ_21000_SRC_21955_SPLIT_H_

#include <iostream>
#include <string>

class Split {
 public:
  void SetInputs() { std::cin >> n; }

  void PrintResult() {
    std::cout << n.substr(0, n.size() / 2) << ' ' << n.substr(n.size() / 2);
  }

 private:
  std::string n;
};

#ifdef BOJ_SUBMIT
int main() {
  Split split;
  split.SetInputs();
  split.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_21000_SRC_21955_SPLIT_H_
