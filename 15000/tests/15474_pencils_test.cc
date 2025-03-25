#include "15000/src/15474_pencils.h"

#include "test_headers/test_helper.h"

class PencilsTest : public IOTestFixture<Pencils> {};

TEST_F(PencilsTest, SampleCase) { RunTest("10 3 100 5 180", "360"); }

TEST_F(PencilsTest, SampleCase2) { RunTest("6 2 200 3 300", "600"); }
