#include <iostream>
#include <conio.h>

const int SIZE = 255;

void is_digit(char s[SIZE]) {
	for (size_t i = 0; i < strlen(s); i++) {
		if ((s[i] >= 48) && (s[i] <= 57)) {
			std::cout << s[i] << std::endl;
		}
	}
}

int main() {
//======================================================IS DIGIT======================================================//
	char str[SIZE];
	std::cout << "Enter string: ";	std::cin >> str;
	is_digit(str);
	_getch();
}
