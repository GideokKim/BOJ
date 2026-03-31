#include "35000/src/35367_snakey_string.h"

#include "test_headers/test_helper.h"

class SnakeyStringTest : public IOTestFixture<SnakeyString> {};

TEST_F(SnakeyStringTest, SampleCase) {
  RunTest("4 8\n..G.....\n.I.S.U..\nB...O.T.\n.......H", "BIGSOUTH");
}
