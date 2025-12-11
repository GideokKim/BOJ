#include "2000/src/2804_make_cross_word.h"

#include "test_headers/test_helper.h"

class MakeCrossWordTest : public IOTestFixture<MakeCrossWord> {};

TEST_F(MakeCrossWordTest, SampleCase) {
  RunTest("BANANA PIDZAMA",
          ".P....\n.I....\n.D....\n.Z....\nBANANA\n.M....\n.A....\n");
}

TEST_F(MakeCrossWordTest, SampleCase2) {
  RunTest("MAMA TATA", ".T..\nMAMA\n.T..\n.A..\n");
}

TEST_F(MakeCrossWordTest, SampleCase3) {
  RunTest("REPUBLIKA HRVATSKA",
          "H........\nREPUBLIKA\nV........\nA........\nT........\nS........\nK."
          ".......\nA........\n");
}
