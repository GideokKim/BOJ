#ifndef BOJ_34000_SRC_34946_SHUTTLE_OR_NOT_AMBIGUOUS_H_
#define BOJ_34000_SRC_34946_SHUTTLE_OR_NOT_AMBIGUOUS_H_

#include <iostream>
#include <string>

class ShuttleOrNotAmbiguous {
 public:
  void SetInputs() { std::cin >> a >> b >> c >> d; }

  void Calculate() {
    result = "~.~";
    size_t shuttle_cost = a + b;
    size_t walk_cost = c;

    if (shuttle_cost <= d && walk_cost <= d) {
      return;
    }

    if (shuttle_cost <= d) {
      result = "Shuttle";
      return;
    }

    if (walk_cost <= d) {
      result = "Walk";
      return;
    }

    result = "T.T";
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t a, b, c, d;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  ShuttleOrNotAmbiguous shuttle_or_not_ambiguous;
  shuttle_or_not_ambiguous.SetInputs();
  shuttle_or_not_ambiguous.Calculate();
  shuttle_or_not_ambiguous.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34946_SHUTTLE_OR_NOT_AMBIGUOUS_H_
