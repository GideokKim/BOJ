#include "30000/src/30033_rust_study.h"

#include "test_headers/test_helper.h"

class RustStudyTest : public IOTestFixture<RustStudy> {};

TEST_F(RustStudyTest, SimpleCase) { RunTest("5\n5 6 7 8 9\n5 5 5 10 10", "3"); }
