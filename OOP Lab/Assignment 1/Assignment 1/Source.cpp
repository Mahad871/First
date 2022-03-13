#include<iostream>
using namespace std;
int main() {

	char alphabet[26];
	/*int* numbers = new int[10];
	char* special = new char[9];*/
	char* input = new char[99];
	const char* alphabetmorse[26];
	int choice;

	int val = 0;
	int uc = 65;
	int lc = 97;

	//storing numerical values
	/*for (int i = 0; i < 10; i++) {
		*(numbers + i) = val;
		val++;
	}*/

	//storing capital and lower case alphabets
	for (int i = 0; uc <= 90; i++,uc++) {
		alphabet[i] = uc;
	}

	//for(int i=25;i<50;i++){
	//*(alphabet+i)=lc;
	//lc++;
	//}


	//storing special characters
	/**(special + 0) = 46;
	*(special + 1) = 44;
	*(special + 2) = 63;
	*(special + 3) = 39;
	*(special + 4) = 33;
	*(special + 5) = 47;
	*(special + 6) = 40;
	*(special + 7) = 41;
	*(special + 8) = 38;*/

	alphabetmorse[0] = { ".-" };//a
	alphabetmorse[1] = { "-..." };//b
	alphabetmorse[2] = { "-.-." };//c
	alphabetmorse[3] = { "-.." };//d
	alphabetmorse[4] = { "." };//e
	alphabetmorse[5] = { "..-." };//f
	alphabetmorse[6] = { "--." };//g
	alphabetmorse[7] = { "...." };//h
	alphabetmorse[8] = { ".." };//i
	alphabetmorse[9] = { ".---" };//j
	alphabetmorse[10] = { "-.-" };//k
	alphabetmorse[11] = { "-.-." };//l
	alphabetmorse[12] = { "-.." };//m
	alphabetmorse[13] = { "." };//n
	alphabetmorse[14] = { "..-." };//o
	alphabetmorse[15] = { "--." };//p
	alphabetmorse[16] = { "...." };//q
	alphabetmorse[17] = { ".." };//r
	alphabetmorse[18] = { ".---" };//s
	alphabetmorse[19] = { ".-." };//t
	alphabetmorse[20] = { ".-.." };//u
	alphabetmorse[21] = { "--" };//v
	alphabetmorse[22] = { "-." };//w
	alphabetmorse[23] = { "---" };//x
	alphabetmorse[24] = { ".--." };//y
	alphabetmorse[25] = { "--.-" };//z

	//cout << "Enter 1 if you want to convert alphabet to morse or enter 2 if you want to convert morse to aphabet." << endl;

	//cin>>choice;
	//switch(choice){
	//case 1:
	//break


	//}


	cin.getline(input,99);



	for (int i = 0; input[i] != '\0'; i++) {

		for (int j = 0; j < 26; j++) {

			if (input[i] == alphabet[j]) {

				cout << alphabetmorse[j];
				break;

			}
		}
			cout << "    ";

	}

	//if(input[j]==alphabet[i]){
	//cout<<alphabetmorse[i];
	//cout<<" ";

	//}}}




	return 0;
}