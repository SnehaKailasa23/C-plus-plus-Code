#include "pch.h"

/*TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}*/

#include "gtest/gtest.h"
#include "SimpleMath\simplemath.h"

TEST(testMath, myCubeTest)
{
	EXPECT_EQ(1000, cubic(10));
}

TEST(testMath, myCubeTest1)
{
	EXPECT_EQ(1000, cubic(10));
}
