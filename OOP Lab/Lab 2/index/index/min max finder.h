#pragma once

int bara(int* arr,int lim) {

	int n = -999999;

	for (int i = 0; i < lim; i++) {

		if (*(arr + i) > n) {
			n = *(arr + i);
		}

	}

	return n;

}

int chota(int* arr, int lim) {

	int n = 999999;

	for (int i = 0; i < lim; i++) {

		if (*(arr + i) < n) {
			n = *(arr + i);
		}

	}

	return n;

}