#ifndef BOJ_32000_SRC_32979_APARTMENT_H_
#define BOJ_32000_SRC_32979_APARTMENT_H_

#include <iostream>
#include <queue>

class Apartment {
 public:
  void SetInputs() {
    int n;
    std::cin >> n >> t;
    hands.resize(t, 0);
    int number;
    for (int i = 0; i < 2 * n; ++i) {
      std::cin >> number;
      integer_queue.push(number);
    }
  }

  void Calculate() {
    int target;
    for (int i = 0; i < t; ++i) {
      std::cin >> target;
      if (target % integer_queue.size()) {
        target %= integer_queue.size();
      }
      for (int j = 0; j < target - 1; ++j) {
        integer_queue.push(integer_queue.front());
        integer_queue.pop();
      }
      hands[i] = integer_queue.front();
    }
  }

  void PrintResult() {
    for (int i = 0; i < t; ++i) {
      std::cout << hands[i] << ' ';
    }
  }

 private:
  std::queue<int> integer_queue;
  std::vector<int> hands;
  int t;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Apartment apartment;
  apartment.SetInputs();
  apartment.Calculate();
  apartment.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32979_APARTMENT_H_
