#ifndef BOJ_34000_SRC_34281_CLASS_PHOTO_H_
#define BOJ_34000_SRC_34281_CLASS_PHOTO_H_

#include <iostream>

class ClassPhoto {
 public:
  void SetInputs() { std::cin >> w >> l; }

  void Calculate() { result = w * l; }

  void PrintResult() { std::cout << result; }

 private:
  long long w, l;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  ClassPhoto classPhoto;
  classPhoto.SetInputs();
  classPhoto.Calculate();
  classPhoto.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34281_CLASS_PHOTO_H_
