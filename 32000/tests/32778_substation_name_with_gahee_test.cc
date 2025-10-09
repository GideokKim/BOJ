#include "32000/src/32778_substation_name_with_gahee.h"

#include "test_headers/test_helper.h"

class SubstationNameWithGaheeTest
    : public IOTestFixture<SubstationNameWithGahee> {};

TEST_F(SubstationNameWithGaheeTest, SimpleCase) {
  RunTest("palindrome (yeokgok yeokcheon yeoksam)",
          "palindrome\nyeokgok yeokcheon yeoksam");
}

TEST_F(SubstationNameWithGaheeTest, SimpleCase2) { RunTest("ori", "ori\n-"); }

TEST_F(SubstationNameWithGaheeTest, SimpleCase3) {
  RunTest("AfterSchool (Flask-back)", "AfterSchool\nFlask-back");
}

TEST_F(SubstationNameWithGaheeTest, SimpleCase4) {
  RunTest("Infinity (girls next door)", "Infinity\ngirls next door");
}

TEST_F(SubstationNameWithGaheeTest, SimpleCase5) {
  RunTest("Soongsil Univ (Salpijae)", "Soongsil Univ\nSalpijae");
}

TEST_F(SubstationNameWithGaheeTest, SimpleCase6) {
  RunTest("dotori (not Tottori)", "dotori\nnot Tottori");
}

TEST_F(SubstationNameWithGaheeTest, SimpleCase7) {
  RunTest("mmmn (mMmN)", "mmmn\nmMmN");
}

TEST_F(SubstationNameWithGaheeTest, SimpleCase8) {
  RunTest("Its dream dream dream dream dream dream world",
          "Its dream dream dream dream dream dream world\n-");
}
