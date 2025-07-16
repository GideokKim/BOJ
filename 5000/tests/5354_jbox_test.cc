#include "5000/src/5354_jbox.h"

#include "test_headers/test_helper.h"

class JboxTest : public IOTestFixture<Jbox> {};

TEST_F(JboxTest, SampleCase) {
  RunTest("3\n3\n5\n4",
          "###\n#J#\n###\n\n#####\n#JJJ#\n#JJJ#\n#JJJ#\n#####\n\n####\n#JJ#\n#"
          "JJ#\n####\n\n");
}
