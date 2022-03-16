#pragma once
#include <iostream>
using namespace std;

char det(char*arr,char ind) {
		
	int i, n;

	for (i = 0; 1; i++) {
	
		if (*(arr + i) == ind)
			break;
	
	}
	cout << "Output: ";
	for (; * (arr + i) != '\0'; i++) {

		cout << *(arr + i);

	}
	

	return 0;
}

void ptrarray(int* z[]) {

	srand(time(NULL));

	int sum = 0;
	
	for (int i = 0; i < 5;i++) {
	
		for (int j = 0; j < 6; j++) {

			*(*(z + i) + j) = rand()+1;


		}
	
	
	}

	for (int i = 0; i < 5; i++) {

		sum = 0;

		for (int j = 0; j < 6; j++) {

			sum+=*(*(z + i) + j) ;

			

		}
		
		cout << "Array " << i + 1 << " Sum: "<<sum<<endl;

	}



}