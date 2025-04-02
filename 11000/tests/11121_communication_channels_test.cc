#include "11000/src/11121_communication_channels.h"

#include "test_headers/test_helper.h"

class CommunicationChannelsTest : public IOTestFixture<CommunicationChannels> {
};

TEST_F(CommunicationChannelsTest, SampleCase) {
  RunTest(
      "2\n"
      "10 10\n"
      "10 11",
      "OK\n"
      "ERROR\n");
}
