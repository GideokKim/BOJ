#include "11000/src/11654_ascii_code.h"

#include "test_headers/test_helper.h"

class AsciiCodeTest : public IOTestFixture<AsciiCode> {};

TEST_F(AsciiCodeTest, SampleCase) { RunTest("A", "65"); }

TEST_F(AsciiCodeTest, SampleCase2) { RunTest("C", "67"); }

TEST_F(AsciiCodeTest, SampleCase3) { RunTest("0", "48"); }

TEST_F(AsciiCodeTest, SampleCase4) { RunTest("9", "57"); }

TEST_F(AsciiCodeTest, SampleCase5) { RunTest("a", "97"); }

TEST_F(AsciiCodeTest, SampleCase6) { RunTest("z", "122"); }
