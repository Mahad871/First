////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//  NAME: Mahad Saleem                                                            //
//  ROLL NO: I210475                                                              //
//  CLASS: CS-21 (Y)                                                              //
//  ASSIGNMENT 1                                                                  //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////
#include "pch.h"
//#include "../Project2/Submission.h"
#include <cstring>
#include <iostream>	

using namespace std;

//-------------------Question No 1 & 3-----------------

char* convertToTapCode(char* sen) {

	char* ans = new char[20000];

	char cipher[5][5] = { { 'a','b','c','d','e' },
						{ 'f','g','h','i','j' },
						{ 'l','m','n','o','p' },
						{ 'q','r','s','t','u' },
						{ 'v','w','x','y','z' } };
	int i, j, z = 0, l, m, n = 0, num = 0;

	for (l = 0; sen[l] >= 'a' && sen[l] <= 'z'; l++) {

		for (i = 0; i < 5; i++) {

			for (j = 0; j < 5; j++) {

				if (sen[l] == cipher[i][j]) {

					for (m = 0; m < i + 1; m++, n++) {

						ans[n] = '.';
						//	//cout << ".";
					}
					ans[n] = ' ';
					n++;
					//	//cout << " ";
					for (m = 0; m < j + 1; m++, n++) {
						ans[n] = '.';
						//	//cout << ".";
					}

				}
				else if (sen[l] == 'k') {
					////cout << ". ...";
					ans[n] = '.';
					n++;
					ans[n] = ' ';
					n++;
					for (int s = 0; s < 2; s++, n++)
						ans[n] = '.';
				}


			}
		}
		ans[n] = ' ';
		n++;
		ans[n] = ' ';
		n++;
		////cout << "  ";
	}

	////cout << endl;
	for (z = 0; ans[z] == '.' || ans[z] == ' '; z++) {

		if (ans[z] == '.' || ans[z] == ' ')
			num++;
		else
			continue;

	}

	char* ret = new char[z];

	for (int x = 0; x < z + 4; x++) {

		ret[x] = NULL;

	}

	for (int x = 0; x < z - 2; x++) {

		ret[x] = ans[x];
	}



	return ret;
}

char* convertToString(char* tap) {

	char cipher[5][5] = { { 'a','b','c','d','e' },
						{ 'f','g','h','i','j' },
						{ 'l','m','n','o','p' },
						{ 'q','r','s','t','u' },
						{ 'v','w','x','y','z' } };
	int i = 0, j = 0, k, l, m = 0, space = 0;

	char res[200000];

	for (l = 0; tap[l] == '.' || tap[l] == ' '; l++) {


		if (1) {

			if (tap[l] == ' ' && space == 0)
				space = 1;

			else if (tap[l] == '.' && space == 0)
				i++;
			else if (tap[l] == '.' && space == 1)
				j++;

			else if (tap[l - 1] == ' ') {
				space = 0;

				res[m] = cipher[i - 1][j - 1];
				m++;
				i = 0, j = 0;
			}

		}



	}

	res[m] = cipher[i - 1][j - 1];

	/*char* ans = new char[m+20];*/

	for (i = 0; i < 200000; i++) {
		if (res[i] >= 'a' && res[i] >= 'z' || res[i] >= 'A' && res[i] >= 'Z') {}

		else
			res[i] = NULL;

	}

	//cout << res;


	return res;

}

void removePunctuation(char* str) {

	int count = 0, i, j, k, space = 0;



	for (i = 0; str[i] != NULL; i++, count) {

		if (str[i] == ' ' && str[i + 1] == ' ') {

			str[i] = '?';
		}
		if (str[i] == '.' || str[i] == '~' || str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '^' || str[i] == '&' || str[i] == '*' || str[i] == '(' || str[i] == ')' || str[i] == '_' || str[i] == '+' || str[i] == '=' || str[i] == '\"' || str[i] == ';' || str[i] == ':' || str[i] == '/' || str[i] == '?')
			count++;
	}


	i = i - count;
	char* ans = new char[i];

	for (j = 0; j < i + 4; j++) {

		ans[j] = NULL;

	}


	for (j = 0, i = 0; str[i] != NULL; i++) {

		if (str[i] == '.' || str[i] == '~' || str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '^' || str[i] == '&' || str[i] == '*' || str[i] == '(' || str[i] == ')' || str[i] == '_' || str[i] == '+' || str[i] == '=' || str[i] == '\"' || str[i] == ';' || str[i] == ':' || str[i] == '/' || str[i] == '?')
			continue;

		else {
			ans[j] = str[i];
			j++;
		}

	}

	for (i = 0; str[i] != NULL; i++, count) {

		str[i] = NULL;
	}
	for (i = 0; ans[i] != NULL; i++, count) {

		str[i] = ans[i];
	}

	//cout << str;


}

void countLetters(char* str, int*& array, int& size) {

	int i, j, k, o, n, cl = 65, sl = 97, indexnum[53];
	char index[53];


	for (o = 0; o < 53; o++) {



		if (o < 26) {
			index[o] = cl;
			cl++;
		}
		if (o >= 26) {
			index[o] = sl;
			sl++;
		}

		indexnum[o] = 0;
	}

	index[52] = ' ';

	for (i = 0; str[i] != NULL; i++) {
		for (n = 0, j = 0; j < 53; j++, n++) {
			if (str[i] == index[j])
				indexnum[n] = (indexnum[n] + 1);
		}

	}

	/*for (o = 0; o < 53; o++) {

		//cout << indexnum[o] << " ";
	} */




	for (n = 0, j = 0; j < 53; j++) {
		if (indexnum[j] >= 1) {
			//indexnum[n] = indexnum[j];
			n++;
		}
	}



	size = n;
	array = new int[size];
	n = 0;
	for (i = 0; str[i] != NULL; i++) {
		for (j = 0; j < 53; j++) {
			if (str[i] == index[j]) {
				array[n] = indexnum[j];
				n++;
				index[j] = '#';
				indexnum[j] = 0;
			}
		}

	}

}

//-------------------Question No 2-----------------

char* additionOfBigInteger(char* Num1, char* Num2) {

	int i, j, k, o, s1, s2, sm, sd = 0, btn = 0, count;

	for (s1 = 0; Num1[s1] != NULL; s1++) {

	}

	for (s2 = 0; Num2[s2] != NULL; s2++) {

	}

	if (s1 > s2) {
		sm = s1;
		sd = sm - s2;
		btn = 2;
	}
	else if (s1 < s2) {
		sm = s2;
		sd = sm - s1;
		btn = 1;
	}
	else
		sm = s1;

	char* n = new char[sm];

	for (o = 0; n[o] != NULL; o++) {

		n[o] = '0';
	}

	if (btn == 1) {

		for (o = sd; Num1[o - sd] != NULL; o++) {

			n[o] = Num1[o - sd];
		}
	}

	else if (btn == 2) {
		for (o = sd; Num2[o - sd] != NULL; o++) {

			n[o] = Num2[o - sd];
		}
	}
	else
	{
		for (o = 0; Num2[o] != NULL; o++) {

			n[o] = Num2[o];
		}
	}

	if (btn == 1) {

		for (o = sm; o >= 0; o--) {

			if ((Num2[o] - 48 + n[o] - 48) >= 10) {
				n[o - 1]++;
				n[o] = (Num2[o] + n[o] - 58);
			}
			else
				n[o] = (Num2[o] + n[o] - 48);
		}

	}

	else if (btn == 2) {
		for (o = sm; o >= 0; o--) {

			if ((Num1[o] - 48 + n[o] - 48) >= 10) {
				n[o - 1]++;
				n[o] = (Num1[o] + n[o] - 58);
			}
			else
				n[o] = (Num1[o] + n[o] - 48);
		}
	}
	else
	{
		for (o = sm; o >= 0; o--) {

			if ((Num1[o] - 48 + n[o] - 48) >= 10) {
				n[o - 1]++;
				n[o] = (Num1[o] + n[o] - 58);
			}
			else
				n[o] = (Num1[o] + n[o] - 48);
		}

	}

	cout << n;


	return n;
}

char* subtractionOfBigInteger(char* Num1, char* Num2) {

	int i, j, k, o, s1, s2, sm, sd = 0, btn = 1, count = 0;

	for (s1 = 0; Num1[s1] != NULL; s1++) {

	}

	for (s2 = 0; Num2[s2] != NULL; s2++) {

	}

	if (s1 > s2) {
		sm = s1;
	}
	else if (s1 < s2) {
		sm = s2;
	}
	else
		sm = s1;

	if (Num1[0] > Num2[0])
		btn = 1;
	else
		btn = 2;

	char* n1 = new char[sm];
	char* n2 = new char[sm];

	for (o = 0; n1[o] != NULL; o++) {

		n1[o] = '0';
		n2[o] = '0';
	}

	for (i = s1 - 1, o = 0; i >= 0; i--, o++) {
		n1[o] = Num1[i];
	}

	for (i = s2 - 1, o = 0; i >= 0; i--, o++) {
		n2[o] = Num2[i];
	}

	if (btn == 1) {
		for (i = 0; n1[i] != NULL; i++) {

			if ((n1[i] - n2[i] + 48) < 48) {
				n1[i] = n1[i] - n2[i] + 58;
				n2[i + 1]++;
			}
			else
				n1[i] = n1[i] - n2[i] + 48;

		}
	}
	else if (btn == 2) {
		for (i = 0; n2[i] != NULL; i++) {

			if ((n2[i] - n1[i] + 48) < 48) {
				n1[i] = n2[i] - n1[i] + 58;
				n1[i + 1]++;
			}
			else
				n1[i] = n2[i] - n1[i] + 48;

		}
	}

	for (i = 0; n2[i] != NULL; i++) {
		n2[i] = '.';
	}

	for (i = s1 - 1, o = 0; i >= 0; i--, o++) {
		n2[o] = n1[i];
	}


	if (btn == 1) {
		for (o = 0; n2[o] != NULL; o++) {
			if (n2[o] == '.')
				n2[o] = NULL;
			else
				Num2[o] = n2[o];
		}
		//cout << Num2 << endl ;
		return Num2;
	}
	if (btn == 2) {
		for (i = 1, o = 0; n2[o] != NULL; o++, i++) {
			if (n2[o] == '.')
				n2[o] = NULL;
			else {
				Num2[i] = n2[o];
				count++;
			}
		}
		//count++;
		//Num2[0] = '-';
		n2[0] = '-';
		for (i = 1, o = 0; i <= count; o++, i++) {
			if (Num2[o] >= '0' && Num2[o] <= '9' || Num2[o] == '-')
				n2[i] = Num2[i];
		}

		//cout << n2;
		return n2;
	}






}

//-------------------Question No 4-----------------

//A & //B

bool isprimeNumber(int n, int i) {

	if ((n % i) == 0 && i <= ((n / 2))) {


		return false;

	}
	else if (i >= (n / 2)) {

		return true;
	}

	isprimeNumber(n, ++i);

}


char findUppercase(char* str) {

	if (*str >= 'A' && *str <= 'Z') {

		return *str;
	}
	else
		findUppercase(++str);

}

//C

int sum(int** array, int row, int column, int& evenSum, int& oddSum) {


	if (evenSum == 0 && oddSum == 0) {


		row = row * column;
		row--;
	}

	if ((array[row / column][row % column] % 2) == 0) {

		evenSum += array[row / column][row % column];

	}
	else if ((array[row / column][row % column] % 2) != 0) {

		oddSum += array[row / column][row % column];

	}

	if (row == 0) {
		cout << evenSum << "++++++++" << oddSum;
		return 0;
	}


	sum(array, --row, column, evenSum, oddSum);
}

//-------------------PATTERN 1-----------------

void patt1(int n) {


	if (n > 0) {
		cout << "  ";
	}
	else {

		cout << "*";
		return;
	}



	return patt1(n - 1);
}
void upper(int n) {


	if (n - 1 > 0) {
		patt1(n - 1);
		cout << "\n";
	}
	else
		return;

	upper(n - 1);
}
void patt3(int n, int i) {


	if (i == n) {
		cout << "*";
		return;
	}
	else
		cout << "  ";




	return patt3(n, ++i);
}
void lower(int n, int i) {

	cout << endl;
	if (i >= 0) {
		patt3(n, i);
	}
	else
		return;

	lower(n, --i);
}
void PrintPattern1(int start, int end) {
	start = 1;
	int i = end - 1;
	lower(end, i);
	upper(end);
}

//-------------------PATTERN 2-----------------



void patt1(int c, int r) {
	if (!(c < r)) {

	}
	else {
		patt1(c + 1, r);
		cout << " *";

	}

	cout << " *";
}

void patt2(int c, int ro, int r) {
	cout << endl;
	cout << string(2 * (r - c), ' ');
	patt1(1, ro);
}

void index(int c, int ro, int r) {
	patt2(c, ro, r);
	if (!(ro < r)) {

	}
	else {
		index(c + 1, ro + 1, r);
		patt2(c, ro, r);
	}
}

void PrintPattern2(int z, int x, int c) {
	c = z;
	index(1, 1, c);
	cout << '\n';

}




////////////////
//            // 
// TEST CASES //
//            // 
////////////////



 //-------------------Question No 1-----------------
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

//-------------------Question No 3-----------------
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
TEST(Question3b, First) {
	char t1[] = "Find Frequency";
	int* arr;
	int size = 0;
	countLetters(t1, arr, size);
	ASSERT_EQ(1, arr[4]);
	ASSERT_EQ(2, arr[2]);
	ASSERT_EQ(2, arr[0]);
	ASSERT_EQ(1, arr[5]);
	ASSERT_EQ(11, size);
}

TEST(Question3b, Second) {
	char t1[] = "Testing function";
	int* arr;
	int size = 0;
	countLetters(t1, arr, size);
	ASSERT_EQ(1, arr[0]);
	ASSERT_EQ(1, arr[2]);
	ASSERT_EQ(2, arr[4]);
	ASSERT_EQ(2, arr[3]);
	ASSERT_EQ(12, size);
}

//-------------------Question No 2-----------------

TEST(Question2a, First) {
	char t1[] = "1234567891011";
	char t2[] = "1110987654321";
	ASSERT_EQ(0, strcmp("2345555545332", additionOfBigInteger(t1, t2)));
}

TEST(Question2a, Second) {
	char t1[] = "12345654321";
	char t2[] = "6543212345";
	ASSERT_EQ(0, strcmp("18888866666", additionOfBigInteger(t1, t2)));
}

TEST(Question2b, First) {
	char t1[] = "98877668800";
	char t2[] = "32390289521";
	ASSERT_EQ(0, strcmp("66487379279", subtractionOfBigInteger(t1, t2)));
}

TEST(Question2b, Second) {
	char t1[] = "4234234234";
	char t2[] = "6843033214";
	ASSERT_EQ(0, strcmp("-2608798980", subtractionOfBigInteger(t1, t2)));
}

//TEST(Question2c, First) {
//	char t1[] = "5439832";
//	char t2[] = "4324327";
//	ASSERT_EQ(0, strcmp("23523612393064", multiplicationOfBigInteger(t1, t2)));
//}
//
//TEST(Question2c, Second) {
//	char t1[] = "43289592";
//	char t2[] = "13275034";
//	ASSERT_EQ(0, strcmp("574670805646128", multiplicationOfBigInteger(t1, t2)));
//}

//-------------------Question No 4-----------------
TEST(Question4a, First) {
	ASSERT_EQ(true, isprimeNumber(31, 2));
}

TEST(Question4a, Second) {
	ASSERT_EQ(false, isprimeNumber(27, 2));
}

TEST(Question4b, First) {
	char t1[] = "finding big leTter";
	ASSERT_EQ('T', findUppercase(t1));
}

TEST(Question4b, Second) {
	char t1[] = "the upper case letter iS not O";
	ASSERT_EQ('S', findUppercase(t1));
}

TEST(Question4c, First) {
	int** arr = new int* [4];
	for (int i = 0; i < 4; i++) {
		arr[i] = new int[4];
	}
	arr[0][0] = 3;
	arr[0][1] = 16;
	arr[0][2] = 9;
	arr[0][3] = 7;

	arr[1][0] = 1;
	arr[1][1] = 6;
	arr[1][2] = 21;
	arr[1][3] = 13;

	arr[2][0] = 23;
	arr[2][1] = 21;
	arr[2][2] = 10;
	arr[2][3] = 12;

	arr[3][0] = 5;
	arr[3][1] = 0;
	arr[3][2] = 8;
	arr[3][3] = 11;

	int evenSum = 0;
	int oddSum = 0;

	sum(arr, 4, 4, evenSum, oddSum);

	ASSERT_EQ(52, evenSum);
	ASSERT_EQ(114, oddSum);
}

TEST(Question4c, Second) {
	int** arr = new int* [3];
	for (int i = 0; i < 3; i++) {
		arr[i] = new int[2];
	}
	arr[0][0] = 20;
	arr[0][1] = 5;

	arr[1][0] = 10;
	arr[1][1] = 2;

	arr[2][0] = 7;
	arr[2][1] = 9;

	int evenSum = 0;
	int oddSum = 0;

	sum(arr, 3, 2, evenSum, oddSum);

	ASSERT_EQ(32, evenSum);
	ASSERT_EQ(21, oddSum);
}

TEST(Question4d, Pattren) {
	PrintPattern1(1, 14);

	PrintPattern2(7, 1, 7);

	/*PrintPattern3(7, 1, 7);*/
}




