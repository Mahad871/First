#pragma once
#include<iostream>
using namespace std;


//-------------------Question No 1-----------------
void patt(int n) {

	
	if (n > 0) {
		cout << "*";
	}
	else
		return;



	return patt(n - 1);
}

void task1(int n){

	if (n > 0) {
		 patt(n);
		cout << "\n";
	}
	else
		return;

	task1(n - 1);
}
//-------------------Question No 3-----------------

void patt1(int n) {


	if (n > 0) {
		cout << "*";
	}
	else
		return;



	return patt1(n - 1);
}



void upper(int n) {


	if (n > 0) {
		patt1(n);
		cout << "\n";
	}
	else
		return;

	upper(n - 1);
}

void mid(int n) {


	if (n > 0) {
		cout<<"*";
	}
	else
		return;

	mid(n - 1);
}

void patt3(int n, int i) {


	if (i == n) {
		return;
	}
	else
		cout << "*";
		



	return patt3(n, ++i);
}

void lower(int n,int i) {

	cout << endl;
	if (i >= 0) {

		patt3(n,i);
	}
	else
		return;

	lower(n,--i);
}

void task3(int n) {
	int i = n-1	;
	upper(n);
	mid(n);
	lower(n,i);
}

void space(int n)
{
	if (n <= 0)
		return;
	cout << " ";
	space(n - 1);
}
void steric(int n)
{
	if (n <= 0)
		return;
	cout << "*";
	steric(n - 1);
}

//-------------------Question No 2-----------------

void task2(int n, int t, int num)
{

	if (t > (num / 2) + 1 && t < num + 2)
	{
		if (t == num + 1)
			return;

		space(num - t);
		cout << '*';
		space(t - n - 1);
		cout << "*";
		cout << endl;
		task2(n - 1, t + 1, num);
		return;
	}
	space(num - n);
	cout << "*";
	space(num - (2 * t));
	if (t != (num / 2) + 1)
		cout << "*";
	cout << endl;
	task2(n - 1, t + 1, num);
}



//-------------------Question No 4-----------------

int getCharCount(const char* ptr, char c) {

	if (*ptr == c)
	{

		return getCharCount(++ptr, c) + 1;
		
	}
	else if (*ptr == '\0') {

		return 0;
	}
	else
	{	
		++ptr;
		return getCharCount(ptr, c);
	}

	
}
