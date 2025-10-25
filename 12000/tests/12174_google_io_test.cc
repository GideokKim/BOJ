#include "12000/src/12174_google_io.h"

#include "test_headers/test_helper.h"

class GoogleIoTest : public IOTestFixture<GoogleIo> {};

TEST_F(GoogleIoTest, SimpleCase) {
  RunTest(
      "2\n2\nOIOOIIIIOIOOIOII\n21\nOIOOIOOIOOIOOOOOOOIOOIIIOOIIIIOOOOIIOOIIOOIO"
      "OIIIOOIOOOOOOOIOOOIOOIOOOOIIOOIIOOOOOIIOOIOOOOIIOOIIOOIOOOOOOIOOIOIOOOII"
      "OIOOOIIOIIOIOOIOOOIOOOIOOOOIOOIOOOOOOOIIIOIOOOIOIOOI",
      "Case #1: OK\nCase #2: I '<3' \"C0d3 J4m\"! :)\n");
}
