#include "27000/src/27160_halli_galli.h"

#include "test_headers/test_helper.h"

class HalliGalliTest : public IOTestFixture<HalliGalli> {};

TEST_F(HalliGalliTest, SampleCase) {
  RunTest("3\nBANANA 2\nPLUM 4\nBANANA 3", "YES");
}

TEST_F(HalliGalliTest, SampleCase2) {
  RunTest("4\nSTRAWBERRY 1\nBANANA 2\nLIME 3\nPLUM 4", "NO");
}

TEST_F(HalliGalliTest, SampleCase3) { RunTest("2\nLIME 5\nLIME 1", "NO"); }

TEST_F(HalliGalliTest, SampleCase4) { RunTest("2\nBANANA 5\nBANANA 5", "NO"); }
