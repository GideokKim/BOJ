#include "30000/src/30979_caring_for_kindergarten.h"

#include "test_headers/test_helper.h"

class CaringForKindergartenTest : public IOTestFixture<CaringForKindergarten> {
};

TEST_F(CaringForKindergartenTest, HappyCase) {
  RunTest("5\n2\n2 3", "Padaeng_i Happy");
}

TEST_F(CaringForKindergartenTest, CryCase) {
  RunTest("6\n2\n2 3", "Padaeng_i Cry");
}
