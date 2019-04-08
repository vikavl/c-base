#include <iostream>
#include <conio.h>

const int SIZE = 255;

void to_lower(char s[SIZE]) {
	for (size_t i = 0; i < strlen(s); i++) {
			if ((s[i] >= 65) && (s[i] <= 90)) {
				s[i] = s[i] + 32;
			}
			std::cout << s[i];
		}
}

int main() {
	//==================================================TO LOWER==========================================================//
	char ch;
	do {
		char str[SIZE];
		std::cout << "Enter string: ";	std::cin >> str;
		to_lower(str);
		std::cout << "\nTry again? [ENTER/n]";
		ch = _getch();
	} while ((ch != 'n') && (ch != 'N'));
}
