#include "30000/src/30454_find_zebra.h"

#include "test_headers/test_helper.h"

class FindZebraTest : public IOTestFixture<FindZebra> {};

TEST_F(FindZebraTest, SampleCase) {
  RunTest("5 9\n110010101\n101010100\n000011111\n011011010\n100100101", "4 3");
}
