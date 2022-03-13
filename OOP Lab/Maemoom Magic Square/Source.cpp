#include <iostream>

using namespace std;

int main() {

	int i, j, k;

	int arr[5];
	int* arrptr[5];

	for (i = 0; i < 5; i++) {
		

		arrptr[i] = &arr[i];

		
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {

			arrptr[i][j] = -1;

		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {

			cout << arrptr[i][j] << "  ";

		}
		cout << endl;
	}


	return 0;
}