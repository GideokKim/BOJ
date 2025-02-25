#include "10000/src/10718_we_love_kriii.h"

#include "test_headers/test_helper.h"

class WeLoveKriiiTest : public IOTestFixture<WeLoveKriii> {};

TEST_F(WeLoveKriiiTest, SimpleCase) {
  RunTest("", "강한친구 대한육군\n강한친구 대한육군\n");
}
