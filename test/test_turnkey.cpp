#include "gtest/gtest.h"
#include "turnkey.h"

TEST(TestTurnkey, TestNotNull)
{
    ASSERT_NE(nullptr, turnkey_get_compiled_hash());
    ASSERT_NE(nullptr, turnkey_get_compiled_branch());
    ASSERT_NE(nullptr, turnkey_get_compiled_time());
}


TEST(TestTurnKey, TestNonEmpty)
{
    ASSERT_GT(0, strlen(turnkey_get_compiled_hash()));
    ASSERT_GT(0, strlen(turnkey_get_compiled_branch()));
    ASSERT_GT(0, strlen(turnkey_get_compiled_time()));
}

