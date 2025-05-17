#ifndef BOJ_29000_SRC_29699_WELCOME_TO_SMUPC_H_
#define BOJ_29000_SRC_29699_WELCOME_TO_SMUPC_H_

#include <iostream>
#include <string>

class WelcomeToSmupc {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    long long index = n % 14;
    if (index == 0) {
      index = 14;
    }
    --index;

    std::string str = "WelcomeToSMUPC";
    result = str[index];
  }

  void PrintResult() { std::cout << result; }

 private:
  long long n;
  char result;
};

#ifdef BOJ_SUBMIT
int main() {
  WelcomeToSmupc welcome_to_smupc;
  welcome_to_smupc.SetInputs();
  welcome_to_smupc.Calculate();
  welcome_to_smupc.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_29000_SRC_29699_WELCOME_TO_SMUPC_H_
