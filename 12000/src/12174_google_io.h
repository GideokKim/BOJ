#ifndef BOJ_12000_SRC_12174_GOOGLE_IO_H_
#define BOJ_12000_SRC_12174_GOOGLE_IO_H_

#include <iostream>
#include <string>
#include <vector>

class GoogleIo {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    std::cin.ignore();
    char_numbers.resize(t);
    test_cases.resize(t);
    results.resize(t, "");

    for (size_t i = 0; i < t; ++i) {
      std::cin >> char_numbers[i] >> test_cases[i];
    }
  }

  void Calculate() {
    for (size_t i = 0; i < char_numbers.size(); ++i) {
      size_t char_number = char_numbers[i];
      std::string target = test_cases[i];

      for (size_t idx = 0; idx < char_number; ++idx) {
        int num = 128;
        char character = 0;
        for (size_t bit_idx = 8 * idx; bit_idx < 8 * (idx + 1); ++bit_idx) {
          if (target[bit_idx] == 'I') {
            character += num;
          }
          num /= 2;
        }
        results[i] += character;
      }
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < results.size(); ++i) {
      std::cout << "Case #" << i + 1 << ": " << results[i] << "\n";
    }
  }

 private:
  std::vector<std::string> test_cases;
  std::vector<size_t> char_numbers;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);

  GoogleIo googleIo;
  googleIo.SetInputs();
  googleIo.Calculate();
  googleIo.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_12000_SRC_12174_GOOGLE_IO_H_
