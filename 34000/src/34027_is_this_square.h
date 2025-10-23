#ifndef BOJ_34000_SRC_34027_IS_THIS_SQUARE_H_
#define BOJ_34000_SRC_34027_IS_THIS_SQUARE_H_

#include <cmath>
#include <iostream>
#include <vector>

class IsThisSquare {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    inputs.resize(t, 0);
    results.resize(t, 0);

    for (auto& input : inputs) {
      std::cin >> input;
    }
  }

  void Calculate() {
    std::vector<long long> squares;
    squares.resize(40000);
    for (long long num = 1; num <= 40000; ++num) {
      squares[num - 1] = num * num;
    }
    for (size_t index = 0; index < inputs.size(); ++index) {
      for (auto square : squares) {
        if (inputs[index] == square) {
          results[index] = 1;
          break;
        }
      }
    }
  }

  void PrintResult() {
    for (auto& result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<long long> inputs;
  std::vector<int> results;
};

#ifdef BOJ_SUBMIT
int main() {
  IsThisSquare isThisSquare;
  isThisSquare.SetInputs();
  isThisSquare.Calculate();
  isThisSquare.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34027_IS_THIS_SQUARE_H_
