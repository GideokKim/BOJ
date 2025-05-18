#include "21000/src/21964_school_song.h"

#include "test_headers/test_helper.h"

class SchoolSongTest : public IOTestFixture<SchoolSong> {};

TEST_F(SchoolSongTest, SampleCase) { RunTest("12\nSunrin,Hair.", "Hair."); }
