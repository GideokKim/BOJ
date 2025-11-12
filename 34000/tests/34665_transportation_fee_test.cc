#include "34000/src/34665_transportation_fee.h"

#include "test_headers/test_helper.h"

class TransportationFeeTest : public IOTestFixture<TransportationFee> {};

TEST_F(TransportationFeeTest, SampleCase) { RunTest("natto\ndaisuki", "1550"); }
