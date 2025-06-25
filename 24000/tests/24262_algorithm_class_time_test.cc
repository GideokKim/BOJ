#include "24000/src/24262_algorithm_class_time.h"

#include "test_headers/test_helper.h"

class AlgorithmClassTimeTest : public IOTestFixture<AlgorithmClassTime> {};

TEST_F(AlgorithmClassTimeTest, SampleCase) { RunTest("1", "1\n0"); }
