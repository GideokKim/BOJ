#ifndef BOJ_4000_SRC_4673_SELF_NUMBER_H_
#define BOJ_4000_SRC_4673_SELF_NUMBER_H_

#include <vector>

std::vector<int> check_self_number(int N);

#ifdef BOJ_SUBMIT
// 백준 제출용 main 함수
#include <iostream>
#include <vector>

int sumOfDigits(int number) {
  int sum = 0;
  while (number > 0) {
    sum += number % 10;
    number /= 10;
  }
  return sum;
}

int d(int n) { return n + sumOfDigits(n); }

int main() {
  std::vector<bool> is_self_number(10001, true);

  for (int i = 1; i <= 10000; i++) {
    int next = d(i);
    if (next <= 10000) {
      is_self_number[next] = false;
    }
  }

  for (int i = 1; i <= 10000; i++) {
    if (is_self_number[i]) {
      std::cout << i << "\n";
    }
  }

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_4000_SRC_4673_SELF_NUMBER_H_
