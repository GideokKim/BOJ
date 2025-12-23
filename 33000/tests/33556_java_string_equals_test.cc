#include "33000/src/33556_java_string_equals.h"

#include "test_headers/test_helper.h"

class JavaStringEqualsTest : public IOTestFixture<JavaStringEquals> {};

TEST_F(JavaStringEqualsTest, SampleCase) {
  RunTest("lms0806\nlms0806", "true\ntrue");
}

TEST_F(JavaStringEqualsTest, SampleCase2) {
  RunTest("lms0806\nIms0806", "false\nfalse");
}

TEST_F(JavaStringEqualsTest, SampleCase3) {
  RunTest("lms0806\nLms0806", "false\ntrue");
}

TEST_F(JavaStringEqualsTest, SampleCase4) {
  RunTest("null\nlms0806", "NullPointerException\nNullPointerException");
}
