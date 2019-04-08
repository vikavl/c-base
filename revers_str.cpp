//#include <iostream>
//#include <conio.h>
//
//int main() {
////==================================================REVERSE STRING===================================================//
//	const int SIZE = 255;
//	char ch;
//	do {
//		char str[SIZE];
//		std::cout << "Enter string: ";	std::cin >> str;
//		char temp;
//		for (int i = 0; i < (strlen(str)/2); i++) {
//				temp = str[i];
//				str[i] = str[strlen(str) - 1 - i];
//				str[strlen(str) - 1 - i] = temp;
//		}
//		std::cout << str << std::endl;
//		std::cout << "Try again? [ENTER/n]\n";
//		ch = _getch();
//	} while ((ch != 'n') && (ch != 'N'));
//}