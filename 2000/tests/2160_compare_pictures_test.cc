#include "2000/src/2160_compare_pictures.h"

#include "test_headers/test_helper.h"

class ComparePicturesTest : public IOTestFixture<ComparePictures> {};

TEST_F(ComparePicturesTest, SampleCase1) {
  RunTest(
      "3\n..X....\n.XXX...\n.XX....\n.....X.\n.X...X.\n...X...\n..XX...\n.XX..."
      ".\n.XX..X.\n.X...X.\nXX.....\nX......\nXX...XX\nXXXX.XX\nXXX..XX",
      "1 2");
}
