#include "11000/src/11943_move_files.h"

#include "test_headers/test_helper.h"

class MoveFilesTest : public IOTestFixture<MoveFiles> {};

TEST_F(MoveFilesTest, SampleCase) { RunTest("1 2\n3 4", "5"); }
