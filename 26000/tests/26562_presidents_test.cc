#include "26000/src/26562_presidents.h"

#include "test_headers/test_helper.h"

class PresidentsTest : public IOTestFixture<Presidents> {};

TEST_F(PresidentsTest, SimpleCase) {
  RunTest(
      "3\nFranklin Grant Jackson\nHamilton Lincoln Washington\nWashington "
      "Washington Washington Franklin Jackson ",
      "$170\n$16\n$123\n");
}
