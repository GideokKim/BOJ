#ifndef BOJ_18000_SRC_18258_QUEUE2_H_
#define BOJ_18000_SRC_18258_QUEUE2_H_

#include <iostream>
#include <queue>
#include <string>

class Queue2 {
 public:
  void SetInputs() {
    std::cin >> n;
    std::cin.ignore();
  }

  void Calculate() {
    std::string command;
    for (int i = 0; i < n; ++i) {
      std::cin >> command;
      if (command == "front") {
        if (integer_queue.empty()) {
          std::cout << -1 << '\n';
        } else {
          std::cout << integer_queue.front() << '\n';
        }
      } else if (command == "back") {
        if (integer_queue.empty()) {
          std::cout << -1 << '\n';
        } else {
          std::cout << integer_queue.back() << '\n';
        }
      } else if (command == "size") {
        std::cout << integer_queue.size() << '\n';
      } else if (command == "empty") {
        std::cout << integer_queue.empty() << '\n';
      } else if (command == "pop") {
        if (integer_queue.empty()) {
          std::cout << -1 << '\n';
        } else {
          std::cout << integer_queue.front() << '\n';
          integer_queue.pop();
        }
      } else if (command == "push") {
        int x;
        std::cin >> x;
        integer_queue.push(x);
      }
    }
  }

  void PrintResult() {}

 private:
  std::queue<int> integer_queue;
  int n;
};

#ifdef BOJ_SUBMIT
int main() {
  // 입출력 최적화를 위한 코드
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Queue2 queue2;
  queue2.SetInputs();
  queue2.Calculate();
  queue2.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_18000_SRC_18258_QUEUE2_H_
