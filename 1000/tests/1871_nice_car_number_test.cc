#include "1000/src/1871_nice_car_number.h"

#include "test_headers/test_helper.h"

class NiceCarNumberTest : public IOTestFixture<NiceCarNumber> {};

TEST_F(NiceCarNumberTest, SampleCase) {
  RunTest("2\nABC-0123\nAAA-9999", "nice\nnot nice\n");
}
