#include <iostream>
#include <conio.h>

const int SIZE = 255;

void reverse(char s[SIZE]) {
	char temp;
	for (int i = 0; i < (strlen(s) / 2); i++) {
		temp = s[i];
		s[i] = s[strlen(s) - 1 - i];
		s[strlen(s) - 1 - i] = temp;
	}
	std::cout << s << std::endl;
}

int main() {
//==================================================REVERSE STRING===================================================//
	
	char ch;
	do {
		char str[SIZE];
		std::cout << "Enter string: ";	std::cin >> str;
		reverse(str);
		std::cout << "Try again? [ENTER/n]\n";
		ch = _getch();
	} while ((ch != 'n') && (ch != 'N'));
}
