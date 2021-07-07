#include "gtest/gtest.h"
#include "null_class.h"


using ::testing::AtLeast;


TEST(NullTest, TestObviousThings)
{
    ASSERT_EQ(0, 0) << "0 is not equal to 0?";
}


TEST(NullTest, TestMockClass)
{
    Mocks::MockNullClass null_class;

    EXPECT_CALL(null_class, EmptyFunction()).Times(AtLeast(1));

    null_class.EmptyFunction();
}

