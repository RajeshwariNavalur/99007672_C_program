#include "unity.h"
#include "converter.h"

void setUp()
{
}

void tearDown()
{
}

void test_name_char()
{
    TEST_ASSERT_EQUAL(0x126, char_sum(RAJI) );
    TEST_ASSERT_EQUAL(0x18e,char_sum(YUKTA) );
    TEST_ASSERT_EQUAL(0x1e0, char_sum(SOWMYA)) );
}
int test_main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();
     RUN_TEST(test_name_char);
    return UNITY_END();
}