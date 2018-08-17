#include "unity_src/unity.h"
#include "fizzbuzz.h"

char buffer[128];

void test_givenOne_Then_ObtainOne() {
	fizzbuzz(1, buffer);
	TEST_ASSERT_EQUAL_STRING("1", buffer);
}

int main() {
	UnityBegin("FizzBuzz");
	RUN_TEST(test_givenOne_Then_ObtainOne);

	return UnityEnd();
}
