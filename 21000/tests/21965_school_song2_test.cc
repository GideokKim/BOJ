#include "21000/src/21965_school_song2.h"

#include "test_headers/test_helper.h"

class SchoolSong2Test : public IOTestFixture<SchoolSong2> {};

TEST_F(SchoolSong2Test, SampleCase) { RunTest("5\n1 2 3 4 2", "YES"); }

TEST_F(SchoolSong2Test, SampleCase2) { RunTest("5\n1 2 3 4 5", "YES"); }

TEST_F(SchoolSong2Test, SampleCase3) { RunTest("5\n1 2 2 3 1", "NO"); }
