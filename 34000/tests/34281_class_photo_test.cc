#include "34000/src/34281_class_photo.h"

#include "test_headers/test_helper.h"

class ClassPhotoTest : public IOTestFixture<ClassPhoto> {};

TEST_F(ClassPhotoTest, SampleCase) { RunTest("50\n110", "5500"); }

TEST_F(ClassPhotoTest, SampleCase2) { RunTest("200\n20", "4000"); }
