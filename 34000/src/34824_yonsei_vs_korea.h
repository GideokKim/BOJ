#ifndef BOJ_34000_SRC_34824_YONSEI_VS_KOREA_H_
#define BOJ_34000_SRC_34824_YONSEI_VS_KOREA_H_

#include <iostream>
#include <string>
#include <vector>

class YonseiVsKorea {
 public:
  void SetInputs() {
    std::cin >> n;
    ranks.resize(n);

    for (auto& rank : ranks) {
      std::cin >> rank;
    }
  }

  void Calculate() {
    size_t korea_rank;
    size_t yonsei_rank;

    for (size_t i = 0; i < n; ++i) {
      if (ranks[i] == "korea") {
        korea_rank = i;
      }

      if (ranks[i] == "yonsei") {
        yonsei_rank = i;
      }
    }

    result = korea_rank < yonsei_rank ? "Yonsei Lost..." : "Yonsei Won!";
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::vector<std::string> ranks;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  YonseiVsKorea yonsei_vs_korea;
  yonsei_vs_korea.SetInputs();
  yonsei_vs_korea.Calculate();
  yonsei_vs_korea.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34824_YONSEI_VS_KOREA_H_
