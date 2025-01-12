#ifndef BOJ_33000_SRC_33161_PENCILS_2_H_
#define BOJ_33000_SRC_33161_PENCILS_2_H_

#include <iostream>

class Pencils2 {
 public:
  void SetInputs() { std::cin >> a; }

  int Calculate() { return a / 5; }

 private:
  int a;
};

#ifdef BOJ_SUBMIT
int main() {
  Pencils2 pencils2;
  pencils2.SetInputs();
  std::cout << pencils2.Calculate() << '\n';

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33161_PENCILS_2_H_
