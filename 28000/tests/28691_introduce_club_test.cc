#include "28000/src/28691_introduce_club.h"

#include "test_headers/test_helper.h"

class IntroduceClubTest : public IOTestFixture<IntroduceClub> {};

TEST_F(IntroduceClubTest, SampleCase) { RunTest("M\n", "MatKor"); }

TEST_F(IntroduceClubTest, SampleCase2) { RunTest("W\n", "WiCys"); }

TEST_F(IntroduceClubTest, SampleCase3) { RunTest("C\n", "CyKor"); }

TEST_F(IntroduceClubTest, SampleCase4) { RunTest("A\n", "AlKor"); }

TEST_F(IntroduceClubTest, SampleCase5) { RunTest("$\n", "$clear"); }
