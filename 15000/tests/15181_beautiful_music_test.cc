#include "15000/src/15181_beautiful_music.h"

#include "test_headers/test_helper.h"

class BeautifulMusicTest : public IOTestFixture<BeautifulMusic> {};

TEST_F(BeautifulMusicTest, SampleCase) {
  RunTest("A\nC\nACE\nABC\nACD\nCEB\nEAF\nEBFA\n#",
          "That music is beautiful.\n"
          "That music is beautiful.\n"
          "That music is beautiful.\n"
          "Ouch! That hurts my ears.\n"
          "Ouch! That hurts my ears.\n"
          "That music is beautiful.\n"
          "Ouch! That hurts my ears.\n"
          "That music is beautiful.\n");
}
