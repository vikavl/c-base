#include <iostream>
#include <conio.h>

int main() {
	//====================================================SUM OF NOT PAIRED======================================================//
	const int SIZE = 50;    //max amount of input numbers
	int arr[SIZE];   //array for numbers
	memset(arr, 0, sizeof(arr));    //filling array (all elements is 0)
	int i = 0;
	char ch;
	puts("Maximum amount of numbers is 50 in range [-60;90]");
	do {   //input numbers
		if (i >= SIZE)	break;
		int n;
		std::cout << "\nEnter " << (i + 1) << " element ";	
		do {
			std::cin >> n;
			arr[i] = n;
		} while ((n <= -60) || (n >= 90));
		i++;
		std::cout << "Continue? [ENTER/n]";
		ch = _getch();
	} while ((ch != 'n') && (ch != 'N'));

	std::cout << std::endl;
	int sum = 0;
	for (int k = 0; k < SIZE; k++) {
		if ((arr[k] % 2) != 0) {
			sum += arr[k];
			std::cout << arr[k] << std::endl;
		}
	}
	std::cout << "=" << sum << std::endl;
	_getch();

}
