#ifndef BOJ_31000_SRC_31995_PLACE_GAME_PIECE_H_
#define BOJ_31000_SRC_31995_PLACE_GAME_PIECE_H_

#include <iostream>

class PlaceGamePiece {
 public:
  void SetInputs() { std::cin >> n >> m; }

  void Calculate() { result = 2 * (n - 1) * (m - 1); }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  PlaceGamePiece place_game_piece;
  place_game_piece.SetInputs();
  place_game_piece.Calculate();
  place_game_piece.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31995_PLACE_GAME_PIECE_H_
