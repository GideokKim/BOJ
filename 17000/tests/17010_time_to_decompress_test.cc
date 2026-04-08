#include "17000/src/17010_time_to_decompress.h"

#include "test_headers/test_helper.h"

class TimeToDecompressTest : public IOTestFixture<TimeToDecompress> {};

TEST_F(TimeToDecompressTest, SimpleCase) {
  RunTest("4\n9 +\n3 -\n12 A\n2 X", "+++++++++\n---\nAAAAAAAAAAAA\nXX\n");
}
