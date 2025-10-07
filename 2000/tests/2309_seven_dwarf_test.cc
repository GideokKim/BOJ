#include "2000/src/2309_seven_dwarf.h"

#include "test_headers/test_helper.h"

class SevenDwarfTest : public IOTestFixture<SevenDwarf> {};

TEST_F(SevenDwarfTest, SampleCase) {
  RunTest("20\n7\n23\n19\n10\n15\n25\n8\n13", "7\n8\n10\n13\n19\n20\n23\n");
}
