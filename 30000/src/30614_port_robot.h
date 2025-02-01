#ifndef BOJ_30000_SRC_30614_PORT_ROBOT_H_
#define BOJ_30000_SRC_30614_PORT_ROBOT_H_

#include <iostream>
#include <stack>
#include <string>

class PortRobot {
 public:
  void SetInputs() {
    std::cin >> log_length;
    std::cin >> logs;
  }

  void Calculate() {
    result = false;
    if (log_length % 2) {
      return;
    }

    const char diff = 'a' - 'A';

    for (size_t i = 0; i < log_length; ++i) {
      if ('a' <= logs[i] && logs[i] <= 'z') {
        log_stack.push(logs[i]);
      } else {
        if (log_stack.empty()) {
          return;
        }
        if ((log_stack.top() - diff) == logs[i]) {
          log_stack.pop();
        } else {
          return;
        }
      }
    }
    result = log_stack.empty();
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t log_length;
  std::string logs;
  std::stack<char> log_stack;
  bool result;
};

#ifdef BOJ_SUBMIT
int main() {
  PortRobot port_robot;
  port_robot.SetInputs();
  port_robot.Calculate();
  port_robot.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30614_PORT_ROBOT_H_
