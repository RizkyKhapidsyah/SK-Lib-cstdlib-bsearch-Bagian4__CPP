#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int compare(const void* a, const void* b) {
	const int* x = (int*)a;
	const int* y = (int*)b;
	return (*x - *y);
}

int main() {
	const int num = 10;
	int arr[num] = { 2,3,5,7,8,10,14,14,14,15 };
	int key = 14;
	int* p = (int*)bsearch(&key, arr, num, sizeof(int), compare);

	if (p == NULL) {
		cout << key << " not found " << endl;
	} else {
		/* 14 occurs at position 6,7 and 8*/
		cout << key << " found at position " << (p - arr) << endl;
	}
		
	_getch();
	return 0;
}