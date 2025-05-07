#include "1000/src/1238_party.h"

#include "test_headers/test_helper.h"

class PartyTest : public IOTestFixture<Party> {};

TEST_F(PartyTest, SampleCase) {
  RunTest("4 8 2\n1 2 4\n1 3 2\n1 4 7\n2 1 1\n2 3 5\n3 1 2\n3 4 4\n4 2 3",
          "10");
}
