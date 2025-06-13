#include "30000/src/30087_seminar.h"

#include "test_headers/test_helper.h"

class SeminarTest : public IOTestFixture<Seminar> {};

TEST_F(SeminarTest, SimpleCase) {
  RunTest("4\nAlgorithm\nNetwork\nCyberSecurity\nStartup",
          "204\n303\nB101\n501\n");
}

TEST_F(SeminarTest, SimpleCase2) {
  RunTest("2\nNetwork\nAlgorithm", "303\n204\n");
}