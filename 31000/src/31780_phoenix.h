#ifndef BOJ_31000_SRC_31780_PHOENIX_H_
#define BOJ_31000_SRC_31780_PHOENIX_H_

#include <iostream>
#include <queue>

class Phoenix {
 public:
  void SetInputs() {
    long long input;
    std::cin >> input >> m;
    mp.push(input);
  }

  void Calculate() {
    result = 0;
    for (size_t i = 0; i < m; ++i) {
      size_t num_of_phoenix = mp.size();
      for (size_t j = 0; j < num_of_phoenix; ++j) {
        auto target = mp.front();
        result += target;
        mp.pop();
        if (target % 2) {
          mp.push(target / 2 + 1);
        } else {
          mp.push(target / 2);
        }
        mp.push(target / 2);
      }
    }

    while (!mp.empty()) {
      result += mp.front();
      mp.pop();
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::queue<long long> mp;
  size_t m;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Phoenix phoenix;
  phoenix.SetInputs();
  phoenix.Calculate();
  phoenix.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31780_PHOENIX_H_
