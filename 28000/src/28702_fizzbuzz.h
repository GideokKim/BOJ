#ifndef BOJ_28000_SRC_28702_FIZZBUZZ_H_
#define BOJ_28000_SRC_28702_FIZZBUZZ_H_

#include <iostream>
#include <string>
#include <vector>

class FizzBuzz {
 public:
  void SetInputs() {
    numbers.resize(3);
    number_index = 0;
    std::string input;
    for (int i = 0; i < 3; ++i) {
      std::cin >> input;
      if (input == "Fizz") {
        numbers[i] = 3;
      } else if (input == "Buzz") {
        numbers[i] = 5;
      } else if (input == "FizzBuzz") {
        numbers[i] = 15;
      } else {
        numbers[i] = std::stoi(input);
        number_index = i;
      }
    }
  }

  void Calculate() {
    int result = numbers[number_index] + 3 - number_index;
    result_string = "";
    if (result % 3 == 0) {
      result_string += "Fizz";
    }
    if (result % 5 == 0) {
      result_string += "Buzz";
    }
    if (result_string.empty()) {
      result_string = std::to_string(result);
    }
  }

  void PrintResult() { std::cout << result_string; }

 private:
  std::vector<int> numbers;
  int number_index;
  std::string result_string;
};

#ifdef BOJ_SUBMIT
int main() {
  FizzBuzz fizzbuzz;
  fizzbuzz.SetInputs();
  fizzbuzz.Calculate();
  fizzbuzz.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28702_FIZZBUZZ_H_
