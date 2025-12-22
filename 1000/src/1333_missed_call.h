#ifndef BOJ_1000_SRC_1333_MISSED_CALL_H_
#define BOJ_1000_SRC_1333_MISSED_CALL_H_

#include <iostream>

class MissedCall {
 public:
  void SetInputs() { std::cin >> n >> l >> d; }

  void Calculate() {
    result = 0;
    long long ring_time = 0;
    bool is_missed = true;

    for (size_t i = 0; i < n; ++i) {
      result += l;
      while (ring_time < result) {
        ring_time += d;
      }
      if (ring_time < result + 5) {
        result = ring_time;
        break;
      } else {
        result += 5;
      }
    }

    while (ring_time < result) {
      ring_time += d;
    }
    result = ring_time;
  }

  void PrintResult() { std::cout << result; }

 private:
  long long n, l, d;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  MissedCall missed_call;
  missed_call.SetInputs();
  missed_call.Calculate();
  missed_call.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1333_MISSED_CALL_H_
