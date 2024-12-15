#include "4673-self_number.h"

#include <algorithm>
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

std::vector<int> check_self_number(int N) {
  std::vector<bool> is_self_number(N + 1, true);
  std::vector<int> result;
  result.reserve(N);  // 메모리 미리 할당

  // 생성자가 있는 수 체크
  for (int i = 1; i <= N; i++) {
    int next = d(i);
    if (next <= N) {
      is_self_number[next] = false;
    }
  }

  // 셀프 넘버만 결과 벡터에 추가
  for (int i = 1; i <= N; i++) {
    if (is_self_number[i]) {
      result.push_back(i);
    }
  }

  return result;
}
