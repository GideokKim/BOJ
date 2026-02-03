#include "3000/src/3447_bug_king.h"

#include "test_headers/test_helper.h"

class BugKingTest : public IOTestFixture<BugKing> {};

TEST_F(BugKingTest, SampleCase) {
  RunTest(
      "print \"No bugs here...\"\n\nvoid hello() "
      "{\nBUGBUG\nprintfBUG(\"Hello, "
      "world!\n\");\n}\n\nwriBUGBUGtelBUGn(\"Hello B-U-G\");",
      "print \"No bugs here...\"\n\nvoid hello() \{\n\nprintf(\"Hello, "
      "world!\n\");\n}\n\nwriteln(\"Hello B-U-G\");\n");
}
