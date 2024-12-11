#include "1065-hansu.h"

#include <iostream>

int check_hansu(int N) {
  int count = 0;

  if (N < 100) {
    return N;
  } else {
    for (int i = 100; i <= N; i++) {
      int hundreds = i / 100;
      int tens = (i / 10) % 10;
      int ones = i % 10;
      if (hundreds - tens == tens - ones) {
        count++;
      }
    }
    return count + 99;
  }
}
