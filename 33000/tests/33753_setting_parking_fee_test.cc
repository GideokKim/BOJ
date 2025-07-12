#include "33000/src/33753_setting_parking_fee.h"

#include "test_headers/test_helper.h"

class SettingParkingFeeTest : public IOTestFixture<SettingParkingFee> {};

TEST_F(SettingParkingFeeTest, SampleCase) {
  RunTest("1200 15 600\n60", "2400");
}

TEST_F(SettingParkingFeeTest, SampleCase2) {
  RunTest("1000 30 100\n40", "1100");
}
