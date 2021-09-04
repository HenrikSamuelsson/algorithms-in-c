#include "../../Unity-master/Unity-master/src/unity.h"

#include "insertion_sort.h"


#define SIZE 5

void setUp (void) {}; /* Is run before every test, put unit init calls here. */
void tearDown (void) {}; /* Is run after every test, put unit clean-up calls here. */

void test_insertionSort_should_sortPositiveValuesAllDifferent(void)
{
    int actual[SIZE] = {1, 56, 848, 5, 88};
    int expected[SIZE] = {1, 5, 56, 88, 848};
    
    insertionSort(actual, SIZE); 
    
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, SIZE);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_insertionSort_should_sortPositiveValuesAllDifferent);
    return UNITY_END();
}
