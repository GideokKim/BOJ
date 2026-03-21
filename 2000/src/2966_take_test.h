#ifndef BOJ_2000_SRC_2966_TAKE_TEST_H_
#define BOJ_2000_SRC_2966_TAKE_TEST_H_

#include <algorithm>
#include <iostream>
#include <string>

class TakeTest {
 public:
  void SetInputs() { std::cin >> n >> answer; }

  void Calculate() {
    std::string adrian_answer = "ABC";
    std::string bruno_answer = "BABC";
    std::string goran_answer = "CCAABB";

    size_t adrian_count = 0;
    size_t bruno_count = 0;
    size_t goran_count = 0;

    for (size_t i = 0; i < n; ++i) {
      if (answer[i] == adrian_answer[i % 3]) {
        adrian_count++;
      }
      if (answer[i] == bruno_answer[i % 4]) {
        bruno_count++;
      }
      if (answer[i] == goran_answer[i % 6]) {
        goran_count++;
      }
    }

    names = "";
    max_count = std::max({adrian_count, bruno_count, goran_count});

    if (adrian_count == max_count) {
      names += "Adrian\n";
    }
    if (bruno_count == max_count) {
      names += "Bruno\n";
    }
    if (goran_count == max_count) {
      names += "Goran\n";
    }
  }

  void PrintResult() { std::cout << max_count << "\n" << names; }

 private:
  size_t n;
  std::string answer;
  size_t max_count;
  std::string names;
};

#ifdef BOJ_SUBMIT
int main() {
  TakeTest take_test;
  take_test.SetInputs();
  take_test.Calculate();
  take_test.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2966_TAKE_TEST_H_
