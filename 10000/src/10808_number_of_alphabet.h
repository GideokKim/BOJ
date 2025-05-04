#ifndef BOJ_10000_SRC_10808_NUMBER_OF_ALPHABET_H_
#define BOJ_10000_SRC_10808_NUMBER_OF_ALPHABET_H_

#include <iostream>
#include <string>
#include <vector>

class NumberOfAlphabet {
 public:
  void SetInputs() { std::cin >> word; }

  void Calculate() {
    count.resize(26, 0);
    for (auto c : word) {
      count[c - 'a']++;
    }
  }

  void PrintResult() {
    for (auto number : count) {
      std::cout << number << " ";
    }
  }

 private:
  std::string word;
  std::vector<int> count;
};

#ifdef BOJ_SUBMIT
int main() {
  NumberOfAlphabet number_of_alphabet;
  number_of_alphabet.SetInputs();
  number_of_alphabet.Calculate();
  number_of_alphabet.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10808_NUMBER_OF_ALPHABET_H_
