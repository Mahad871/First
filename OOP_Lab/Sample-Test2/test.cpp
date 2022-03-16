#include "pch.h"
#include "../LAB 4/i210475.h"

//const char* str1 = "wavelength";
//const char* str2 = "characteristics";
//const char* str3 = "instagramer";
//const char* str4 = "program";
//const char* str5 = "integer";
//
////task 4 test cases
//TEST(Task4, Testcase1) {
//	EXPECT_EQ(2, getCharCount(str1, 'e'));
//	EXPECT_EQ(3, getCharCount(str2, 'c'));
//	EXPECT_EQ(2, getCharCount(str3, 'r'));
//}
//TEST(Task4, Testcase2) {
//	EXPECT_EQ(1, getCharCount(str4, 'g'));
//	EXPECT_EQ(2, getCharCount(str5, 'e'));
//}
//
//#include <iostream>
//#include "../LAB 4/i210475.h"
//using namespace std;

int main() {

	int n;

	cout << "\nINPUT: ";
	cin >> n;

	task1(n);
	cout << endl;
	task2(n,1,n);
	cout << endl;
	task3(n);


	return 0;
}