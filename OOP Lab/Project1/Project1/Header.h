#pragma once
#include<iostream>
using namespace std;

//char** words_to_sentence(int row, int col) {
//
//
//	char* a = new char[5];
//	char* b = new char[5];
//	char* c = new char[3];
//	char* d = new char[3];
//	char* e = new char[3];
//
//	char** sent = new char* [5];
//
//	*(a + 0) = { 'H' };
//	*(a + 1) = { 'e' };
//	*(a + 2) = { 'l' };
//	*(a + 3) = { 'l' };
//	*(a + 4) = { 'o' };
//
//	*(b + 0) = { 'w' };
//	*(b + 1) = { 'o' };
//	*(b + 2) = { 'r' };
//	*(b + 3) = { 'l' };
//	*(b + 4) = { 'd' };
//
//	*(c + 0) = { 'h' };
//	*(c + 1) = { 'o' };
//	*(c + 2) = { 'w' };
//
//	*(d + 0) = { 'a' };
//	*(d + 1) = { 'r' };
//	*(d + 2) = { 'e' };
//
//	*(e + 0) = { 'y' };
//	*(e + 1) = { 'o' };
//	*(e + 2) = { 'u' };
//
//	*(sent + 0) = a;
//	*(sent + 1) = b;
//	*(sent + 2) = c;
//	*(sent + 3) = d;
//	*(sent + 4) = e;
//
//
//	return sent;
//}
//
//int** Min_Max_Scaling(int nrow, int ncol) {
//
//	int* a = new int[6];
//	int* b = new int[6];
//	int* c = new int[6];
//	int* d = new int[6];
//	int* e = new int[6];
//
//	int** ptr = new int* [5];
//
//	*(a + 0) = { 100 };
//	*(a + 1) = { 90 };
//	*(a + 2) = { 95 };
//	*(a + 3) = { 90 };
//	*(a + 4) = { 98 };
//	*(a + 5) = { 93 };
//
//	*(b + 0) = { 10 };
//	*(b + 1) = { 20 };
//	*(b + 2) = { 6 };
//	*(b + 3) = { 40 };
//	*(b + 4) = { 30 };
//	*(b + 5) = { 30 };
//
//	*(c + 0) = { 90 };
//	*(c + 1) = { 60 };
//	*(c + 2) = { 80 };
//	*(c + 3) = { 60 };
//	*(c + 4) = { 60 };
//	*(c + 5) = { 100 };
//
//	*(d + 0) = { 10 };
//	*(d + 1) = { 5 };
//	*(d + 2) = { 10 };
//	*(d + 3) = { 5 };
//	*(d + 4) = { 10 };
//	*(d + 5) = { 6 };
//
//	*(e + 0) = { 100 };
//	*(e + 1) = { 100 };
//	*(e + 2) = { 100 };
//	*(e + 3) = { 90 };
//	*(e + 4) = { 90 };
//	*(e + 5) = { 90 };
//
//	
//	*(ptr + 0) = a;
//	*(ptr + 1) = b;
//	*(ptr + 2) = c;
//	*(ptr + 3) = d;
//	*(ptr + 4) = e;
//
//	int   min=5,max=100,i=0,j=0;
//	float X_std;
//	for (i = 0; i < 5; i++) {
//	
//		for (j = 0; j < 6; j++) {
//			
//			X_std = ((static_cast<float>(ptr[i][j]) - min) / (max - min));
//			ptr[i][j] = round(X_std * (80 - 50) + 50);
//		
//		}
//		
//	}
//
//
//	return ptr;
//
//}


void threeD_array(int*** p, int pages, int row, int col) {



//	int row, col, pages;

	int* c = new int[col];
	int** r = new int* [row];
	p = new int** [pages];

	*r = c;
	**p = *r;

	for (int i = 0; i < pages; i++) {
		for (int j = 0; j < row; j++){
			for (int k = 0; k < col; k++){

				p[i][j][k] = rand()%257;


			}
		}
	}

	for (int i = 0; i < pages; i++) {
		for (int j = 0; j < row; j++) {
			for (int k = 0; k < col; k++) {

				cout<<p[i][j][k];


			}
			cout << endl;
		}
		cout << endl;
	}


}