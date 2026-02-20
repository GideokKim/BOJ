#include "14000/src/14487_filial_man.h"

#include "test_headers/test_helper.h"

class FilialManTest : public IOTestFixture<FilialMan> {};

TEST_F(FilialManTest, SampleCase) { RunTest("5\n1 6 5 2 4", "12"); }

TEST_F(FilialManTest, SampleCase2) { RunTest("4\n100 100 100 101", "300"); }
