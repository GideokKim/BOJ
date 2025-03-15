#ifndef BOJ_10000_SRC_10798_VERTICAL_READING_H_
#define BOJ_10000_SRC_10798_VERTICAL_READING_H_

#include <iostream>
#include <string>
#include <vector>

class VerticalReading {
 public:
  void SetInputs() {
    words.resize(15, "");
    std::string word;
    for (int i = 0; i < 5; i++) {
      std::cin >> word;
      for (int j = 0; j < word.length(); j++) {
        words[j] += word[j];
      }
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (const auto& word : words) {
      std::cout << word;
    }
  }

 private:
  std::vector<std::string> words;
};

#ifdef BOJ_SUBMIT
int main() {
  VerticalReading vertical_reading;
  vertical_reading.SetInputs();
  vertical_reading.Calculate();
  vertical_reading.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10798_VERTICAL_READING_H_
