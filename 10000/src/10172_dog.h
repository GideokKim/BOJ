#ifndef BOJ_10000_SRC_10172_DOG_H_
#define BOJ_10000_SRC_10172_DOG_H_

#include <iostream>
#include <string>

class Dog {
 public:
  void SetInputs() {}

  void Calculate() {
    dog_picture =
        "|\\_/|\n"
        "|q p|   /}\n"
        "( 0 )\"\"\"\\\n"
        "|\"^\"`    |\n"
        "||_/=\\\\__|";
  }

  void PrintResult() { std::cout << dog_picture; }

 private:
  std::string dog_picture;
};

#ifdef BOJ_SUBMIT
int main() {
  Dog dog;
  dog.SetInputs();
  dog.Calculate();
  dog.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10172_DOG_H_
