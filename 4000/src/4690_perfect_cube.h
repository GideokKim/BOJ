#ifndef BOJ_4000_SRC_4690_PERFECT_CUBE_H_
#define BOJ_4000_SRC_4690_PERFECT_CUBE_H_

#include <iostream>
#include <tuple>
#include <vector>

class PerfectCube {
 public:
  void SetInputs() {}

  void Calculate() {
    for (size_t a = 5; a <= 100; a++) {
      for (size_t b = 2; b < a; ++b) {
        for (size_t c = b + 1; c < a; ++c) {
          for (size_t d = c + 1; d < a; ++d) {
            if (a * a * a == b * b * b + c * c * c + d * d * d) {
              cubes.push_back(a);
              std::tuple<size_t, size_t, size_t> triple = {b, c, d};
              triples.emplace_back(triple);
            }
          }
        }
      }
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < cubes.size(); ++i) {
      std::cout << "Cube = " << cubes[i] << ", Triple = ("
                << std::get<0>(triples[i]) << "," << std::get<1>(triples[i])
                << "," << std::get<2>(triples[i]) << ")\n";
    }
  }

 private:
  std::vector<size_t> cubes;
  std::vector<std::tuple<size_t, size_t, size_t>> triples;
};

#ifdef BOJ_SUBMIT

int main() {
  PerfectCube perfect_cube;
  perfect_cube.SetInputs();
  perfect_cube.Calculate();
  perfect_cube.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_4000_SRC_4690_PERFECT_CUBE_H_
