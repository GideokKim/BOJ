#ifndef BOJ_19000_SRC_19602_DOG_TREATS_H_
#define BOJ_19000_SRC_19602_DOG_TREATS_H_

#include <iostream>
#include <string>

class DogTreats {
 public:
  void SetInputs() { std::cin >> s >> m >> l; }

  void Calculate() {
    if (s + 2 * m + 3 * l >= 10) {
      result = "happy";
    } else {
      result = "sad";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int s;
  int m;
  int l;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  DogTreats dog_treats;
  dog_treats.SetInputs();
  dog_treats.Calculate();
  dog_treats.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_19000_SRC_19602_DOG_TREATS_H_
