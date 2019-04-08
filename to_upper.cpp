#include <iostream>
#include <string.h>
#include <conio.h>

const int SIZE = 255;

void to_upper(char s[SIZE]) {
	for (size_t i = 0; i < strlen(s); i++) {
		if ((s[i] >= 97) && (s[i] <= 122)) {
			s[i] = s[i] - 32;
		}
		std::cout << s[i];
	}
}

int main() {
//==================================================TO UPPER==========================================================//
	char ch;
	do {
	char str[SIZE];
	std::cout << "Enter string: ";	std::cin >> str;
	to_upper(str);
		std::cout << "\nTry again? [ENTER/n]\n";
		ch = _getch();
	} while ((ch != 'n') && (ch != 'N'));
}
