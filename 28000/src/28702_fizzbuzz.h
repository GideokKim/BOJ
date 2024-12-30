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

  std::string Calculate() {
    int result = numbers[number_index] + 3 - number_index;
    std::string result_string = "";
    if (result % 3 == 0) {
      result_string += "Fizz";
    }
    if (result % 5 == 0) {
      result_string += "Buzz";
    }
    if (result_string.empty()) {
      return std::to_string(result);
    }
    return result_string;
  }

 private:
  std::vector<int> numbers;
  int number_index;
};

#ifdef BOJ_SUBMIT
int main() {
  FizzBuzz fizzbuzz;
  fizzbuzz.SetInputs();
  std::cout << fizzbuzz.Calculate() << '\n';

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28702_FIZZBUZZ_H_
