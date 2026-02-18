#include "33000/src/33869_encrypt_diary.h"

#include "test_headers/test_helper.h"

class EncryptDiaryTest : public IOTestFixture<EncryptDiary> {};

TEST_F(EncryptDiaryTest, SampleCase) {
  RunTest("THEFIFTHSMUPC\nGOODLUCK", "MJJFBREA");
}

TEST_F(EncryptDiaryTest, SampleCase2) {
  RunTest("ALGOS\nSOOKMYUNG", "RMMHJYUKC");
}
