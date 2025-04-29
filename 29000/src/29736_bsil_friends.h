#ifndef BOJ_29000_SRC_29736_BSIL_FRIENDS_H_
#define BOJ_29000_SRC_29736_BSIL_FRIENDS_H_

#include <iostream>
#include <string>

class BsilFriends {
 public:
  void SetInputs() { std::cin >> a >> b >> k >> x; }

  void Calculate() {
    long long min = k - x;
    long long max = k + x;
    if (min < a) {
      min = a;
    }
    if (max > b) {
      max = b;
    }
    long long count = max - min + 1;
    result = count > 0 ? std::to_string(count) : "IMPOSSIBLE";
  }

  void PrintResult() { std::cout << result; }

 private:
  long long a, b, k, x;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  BsilFriends bsil_friends;
  bsil_friends.SetInputs();
  bsil_friends.Calculate();
  bsil_friends.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_29000_SRC_29736_BSIL_FRIENDS_H_
