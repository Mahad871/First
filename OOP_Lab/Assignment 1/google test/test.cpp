#include "../Assignment 1/Header.h"
#include <gtest/gtest.h>
#include <cstring>

// //-------------------Question No 1-----------------
TEST(Question1, First) {
	char t1[] = "bottle";
	char ans[] = ". ..  ... ....  .... ....  .... ....  ... .  . .....";
	ASSERT_EQ(0, strcmp(ans, convertToTapCode(t1)));
}

TEST(Question1, Second) {
	char t1[] = "coding";
	char ans[] = ". ...  ... ....  . ....  .. ....  ... ...  .. ..";
	ASSERT_EQ(0, strcmp(ans, convertToTapCode(t1)));
}

TEST(Question1, Third) {
	char ans[] = "decode";
	char t1[] = ". ....  . .....  . ...  ... ....  . ....  . .....";
	ASSERT_EQ(0, strcmp(ans, convertToString(t1)));
}

TEST(Question1, Fourth) {
	char ans[] = "cipher";
	char t1[] = ". ...  .. ....  ... .....  .. ...  . .....  .... ..";
	ASSERT_EQ(0, strcmp(ans, convertToString(t1)));
}