#include "pch.h"
#include "../Assignment 1/Header.h"
#include <gtest/gtest.h>
#include <cstring>

// //-------------------Question No 1-----------------
TEST(Question3a, First) {
	char t1[] = "punctuation? needs&  :to be (removed).";
	removePunctuation(t1);
	ASSERT_EQ(0, strcmp(t1, "punctuation needs to be removed"));
}

TEST(Question3a, Second) {
	char t1[] = "There: (are) multiple#  punctuation(s) marks?";
	removePunctuation(t1);
	ASSERT_EQ(0, strcmp(t1, "There are multiple punctuations marks"));
}

