#ifndef BOJ_21000_SRC_21965_SCHOOL_SONG2_H_
#define BOJ_21000_SRC_21965_SCHOOL_SONG2_H_

#include <iostream>
#include <string>
#include <vector>

class SchoolSong2 {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    numbers.resize(n, 0);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> numbers[i];
    }
  }

  void Calculate() {
    result = "YES";
    bool is_left = true;
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
      if (numbers[i] < numbers[i + 1]) {
        if (is_left) {
          continue;
        } else {
          result = "NO";
        }
      } else if (numbers[i] > numbers[i + 1]) {
        is_left = false;
      } else {
        result = "NO";
        return;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string str;
  std::vector<long long> numbers;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  SchoolSong2 school_song;
  school_song.SetInputs();
  school_song.Calculate();
  school_song.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_21000_SRC_21965_SCHOOL_SONG2_H_
