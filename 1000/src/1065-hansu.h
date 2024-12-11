#ifndef BOJ_1000_SRC_1065_HANSU_H_
#define BOJ_1000_SRC_1065_HANSU_H_

int check_hansu(int N);

#ifdef BOJ_SUBMIT
// 백준 제출용 main 함수
#include <iostream>

int main() {
  int N;
  int count = 0;
  std::cin >> N;

  if (N < 100) {
    std::cout << N << std::endl;
    return 0;
  } else {
    for (int i = 100; i <= N; i++) {
      int hundreds = i / 100;
      int tens = (i / 10) % 10;
      int ones = i % 10;
      if (hundreds - tens == tens - ones) {
        count++;
      }
    }
    std::cout << count + 99 << std::endl;
  }

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1065_HANSU_H_
