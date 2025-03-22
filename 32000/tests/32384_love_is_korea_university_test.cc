#include "32000/src/32384_love_is_korea_university.h"

#include "test_headers/test_helper.h"

class LoveIsKoreaUniversityTest : public IOTestFixture<LoveIsKoreaUniversity> {
};

TEST_F(LoveIsKoreaUniversityTest, SimpleCase) {
  RunTest("1", "LoveisKoreaUniversity ");
}

TEST_F(LoveIsKoreaUniversityTest, SimpleCase2) {
  RunTest("2", "LoveisKoreaUniversity LoveisKoreaUniversity ");
}
