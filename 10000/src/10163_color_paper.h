#ifndef BOJ_10000_SRC_10163_COLOR_PAPER_H_
#define BOJ_10000_SRC_10163_COLOR_PAPER_H_

#include <iostream>
#include <vector>

class ColorPaper {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    papers.resize(n, std::vector<size_t>(4));
    for (size_t i = 0; i < n; ++i) {
      std::cin >> papers[i][0] >> papers[i][1] >> papers[i][2] >> papers[i][3];
    }
  }

  void Calculate() {
    plane.resize(1001, std::vector<size_t>(1001, 0));
    for (size_t i = 0; i < papers.size(); ++i) {
      for (size_t x = papers[i][0]; x < papers[i][0] + papers[i][2]; ++x) {
        for (size_t y = papers[i][1]; y < papers[i][1] + papers[i][3]; ++y) {
          plane[x][y] = i + 1;
        }
      }
    }

    results.resize(papers.size() + 1, 0);
    for (size_t x = 0; x < 1001; ++x) {
      for (size_t y = 0; y < 1001; ++y) {
        ++results[plane[x][y]];
      }
    }
  }

  void PrintResult() {
    for (size_t i = 1; i < results.size(); ++i) {
      std::cout << results[i] << "\n";
    }
  }

 private:
  std::vector<std::vector<size_t>> papers;
  std::vector<std::vector<size_t>> plane;
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  ColorPaper color_paper;
  color_paper.SetInputs();
  color_paper.Calculate();
  color_paper.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10163_COLOR_PAPER_H_
