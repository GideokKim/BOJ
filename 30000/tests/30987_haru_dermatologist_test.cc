#include "30000/src/30987_haru_dermatologist.h"

#include "test_headers/test_helper.h"

class HaruDermatologistTest : public IOTestFixture<HaruDermatologist> {};

TEST_F(HaruDermatologistTest, SimpleCase) { RunTest("0 1\n3 4 2 8 3", "-2"); }

TEST_F(HaruDermatologistTest, SimpleCase2) {
  RunTest("-3 3\n-15 -4 5 -2 -5", "-210");
}
