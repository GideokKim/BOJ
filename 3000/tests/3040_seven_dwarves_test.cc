#include "3000/src/3040_seven_dwarves.h"

#include "test_headers/test_helper.h"

class SevenDwarvesTest : public IOTestFixture<SevenDwarves> {};

TEST_F(SevenDwarvesTest, SampleCase) {
  RunTest("7\n8\n10\n13\n15\n19\n20\n23\n25", "7\n8\n10\n13\n19\n20\n23\n");
}

TEST_F(SevenDwarvesTest, SampleCase2) {
  RunTest("8\n6\n5\n1\n37\n30\n28\n22\n36", "8\n6\n5\n1\n30\n28\n22\n");
}
