#ifndef BOJ_32000_SRC_32384_LOVE_IS_KOREA_UNIVERSITY_H_
#define BOJ_32000_SRC_32384_LOVE_IS_KOREA_UNIVERSITY_H_

#include <iostream>
#include <string>

class LoveIsKoreaUniversity {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < n; ++i) {
      std::cout << "LoveisKoreaUniversity ";
    }
  }

 private:
  size_t n;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  LoveIsKoreaUniversity love_is_korea_university;
  love_is_korea_university.SetInputs();
  love_is_korea_university.Calculate();
  love_is_korea_university.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32384_LOVE_IS_KOREA_UNIVERSITY_H_
