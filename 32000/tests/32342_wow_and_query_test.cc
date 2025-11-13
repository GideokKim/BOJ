#include "32000/src/32342_wow_and_query.h"

#include "test_headers/test_helper.h"

class WowAndQueryTest : public IOTestFixture<WowAndQuery> {};

TEST_F(WowAndQueryTest, SimpleCase) {
  RunTest("4\nWOW\nWWO\nWOWOWWOW\nOWOOWOOW", "1\n0\n3\n0\n");
}
