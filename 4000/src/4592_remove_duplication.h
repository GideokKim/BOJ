#ifndef BOJ_4000_SRC_4592_REMOVE_DUPLICATION_H_
#define BOJ_4000_SRC_4592_REMOVE_DUPLICATION_H_

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class RemoveDuplication {
 public:
  void SetInputs() {
    std::string input;
    while (true) {
      std::getline(std::cin, input);
      std::stringstream ss(input);
      std::string word;
      ss >> word;
      int count = std::stoi(word);
      if (!count) {
        return;
      }
      input[0] = ' ';
      std::vector<int> numbers;
      while (ss >> word) {
        int num = std::stoi(word);

        if (!numbers.empty() && numbers.back() == num) {
          continue;
        }
        numbers.emplace_back(num);
      }
      results.push_back(numbers);
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (const auto& result : results) {
      for (auto target : result) {
        std::cout << target << " ";
      }
      std::cout << "$\n";
    }
  }

 private:
  std::vector<std::vector<int>> results;
};

#ifdef BOJ_SUBMIT
int main() {
  RemoveDuplication remove_duplication;
  remove_duplication.SetInputs();
  remove_duplication.Calculate();
  remove_duplication.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_4000_SRC_4592_REMOVE_DUPLICATION_H_
