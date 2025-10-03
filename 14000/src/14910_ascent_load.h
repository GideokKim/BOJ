#ifndef BOJ_14000_SRC_14910_ASCENT_LOAD_H_
#define BOJ_14000_SRC_14910_ASCENT_LOAD_H_

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class AscentLoad {
 public:
  void SetInputs() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    std::string word;
    while (ss >> word) {
      numbers.emplace_back(std::stoll(word));
    }
  }

  void Calculate() {
    long long previous_number = -1000001;
    result = "Good";
    for (auto target : numbers) {
      if (previous_number <= target) {
        previous_number = target;
        continue;
      } else {
        result = "Bad";
        return;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<long long> numbers;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  AscentLoad ascent_load;
  ascent_load.SetInputs();
  ascent_load.Calculate();
  ascent_load.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14910_ASCENT_LOAD_H_
