#include "2000/src/2606_virus.h"

#include "test_headers/test_helper.h"

class VirusTest : public IOTestFixture<Virus> {};

TEST_F(VirusTest, SampleCase) {
  RunTest("7\n6\n1 2\n2 3\n1 5\n5 2\n5 6\n4 7\n", "4");
}
