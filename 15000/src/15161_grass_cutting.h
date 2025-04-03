#ifndef BOJ_15000_SRC_15161_GRASS_CUTTING_H_
#define BOJ_15000_SRC_15161_GRASS_CUTTING_H_

#include <iostream>
#include <vector>

class GrassCutting {
 public:
  void SetInputs() {
    std::cin >> k;
    grass.resize(10, std::vector<long long>(10, 1));
    cutting_lines.resize(k, std::vector<long long>(6));

    for (size_t i = 0; i < k; ++i) {
      long long line;
      for (size_t j = 0; j < 6; ++j) {
        std::cin >> line;
        cutting_lines[i][j] = line - 1;
      }
    }
  }

  void Calculate() {
    for (size_t week = 0; week < k; ++week) {
      for (size_t i = 0; i < 10; ++i) {
        for (size_t j = 0; j < 10; ++j) {
          grass[i][j] += 1;
        }
      }

      for (size_t i = 0; i < 3; ++i) {
        for (size_t j = 0; j < 10; ++j) {
          grass[cutting_lines[week][i]][j] = 1;
        }
      }

      for (size_t i = 3; i < 6; ++i) {
        for (size_t j = 0; j < 10; ++j) {
          grass[j][cutting_lines[week][i]] = 1;
        }
      }
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < 10; ++i) {
      for (size_t j = 0; j < 10; ++j) {
        std::cout << grass[i][j] << " ";
      }
      std::cout << std::endl;
    }
  }

 private:
  size_t k;
  std::vector<std::vector<long long>> grass;
  std::vector<std::vector<long long>> cutting_lines;
};

#ifdef BOJ_SUBMIT
int main() {
  GrassCutting grass_cutting;
  grass_cutting.SetInputs();
  grass_cutting.Calculate();
  grass_cutting.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15161_GRASS_CUTTING_H_
