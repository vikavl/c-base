#include <iostream>
#include <conio.h>
#include <string.h>

int main() {
//======================================================IS DIGIT======================================================//
	const int SIZE = 255;
	char str[SIZE];
	std::cout << "Enter string: ";	std::cin >> str;
	for (size_t i = 0; i < strlen(str); i++) {
		if ((str[i]>=48)&&(str[i]<=57)) {
			std::cout << str[i] << std::endl;
		}
	}
	_getch();
}
