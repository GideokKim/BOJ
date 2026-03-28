#ifndef BOJ_2000_SRC_2160_COMPARE_PICTURES_H_
#define BOJ_2000_SRC_2160_COMPARE_PICTURES_H_

#include <iostream>
#include <string>
#include <vector>

class ComparePictures {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;

    pictures.resize(n, std::vector<std::string>(5));

    for (size_t i = 0; i < n; i++) {
      for (size_t j = 0; j < 5; j++) {
        std::cin >> pictures[i][j];
      }
    }
    result.resize(2, 0);
  }

  void Calculate() {
    size_t diff_count = 36;
    for (size_t i = 0; i < pictures.size() - 1; ++i) {
      for (size_t j = i + 1; j < pictures.size(); ++j) {
        size_t current_diff_count = 0;
        for (size_t row = 0; row < 5; ++row) {
          for (size_t col = 0; col < 7; ++col) {
            if (pictures[i][row][col] != pictures[j][row][col]) {
              ++current_diff_count;
            }
          }
        }
        if (diff_count > current_diff_count) {
          diff_count = current_diff_count;
          result[0] = i + 1;
          result[1] = j + 1;
        }
      }
    }
  }

  void PrintResult() { std::cout << result[0] << ' ' << result[1]; }

 private:
  std::vector<std::vector<std::string>> pictures;
  std::vector<int> result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  ComparePictures compare_pictures;
  compare_pictures.SetInputs();
  compare_pictures.Calculate();
  compare_pictures.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2160_COMPARE_PICTURES_H_
