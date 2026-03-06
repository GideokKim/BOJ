#include "11000/src/11800_tawla.h"

#include "test_headers/test_helper.h"

class TawlaTest : public IOTestFixture<Tawla> {};

TEST_F(TawlaTest, SampleCase) {
  RunTest("3\n1 2\n2 3\n3 4",
          "Case 1: Doh Yakk\nCase 2: Seh Doh\nCase 3: Ghar Seh\n");
}
