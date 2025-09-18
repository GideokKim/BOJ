#include "17000/src/17249_taebo_gun.h"

#include "test_headers/test_helper.h"

class TaeboGunTest : public IOTestFixture<TaeboGun> {};

TEST_F(TaeboGunTest, SimpleCase) {
  RunTest("@===@==@=@==(^0^)==@=@===@", "4 3");
}
