#include <iostream>

using namespace std;

int main() {

	int r = 5, c = 4,i,j;

	int* a = new int[r * c];

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {

			a[i*j] = 1;

		}
	}





	return 0;
}