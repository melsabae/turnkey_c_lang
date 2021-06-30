#include "gtest/gtest.h"
#include "version.h"

TEST(TestVersion, TestNotNull)
{
    ASSERT_NE(nullptr, version_get_compiled_hash()) << "compiled hash was NULL";
    ASSERT_NE(nullptr, version_get_compiled_branch()) << "compiled branch was NULL";
    ASSERT_NE(nullptr, version_get_compiled_time()) << "compiled time was NULL";
}


TEST(TestVersion, TestNonEmpty)
{
    ASSERT_LT(0, strlen(version_get_compiled_hash())) << "compiled hash was empty";
    ASSERT_LT(0, strlen(version_get_compiled_branch())) << "compiled branch was empty";
    ASSERT_LT(0, strlen(version_get_compiled_time())) << "compiled time was empty";
}

