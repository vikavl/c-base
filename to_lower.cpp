//#include <iostream>
//#include <conio.h>
//
//int main() {
//	//==================================================TO LOWER==========================================================//
//	const int SIZE = 255;
//	char ch;
//	do {
//		char str[SIZE];
//		std::cout << "Enter string: ";	std::cin >> str;
//		for (size_t i = 0; i < strlen(str); i++) {
//			if ((str[i] >= 65) && (str[i] <= 90)) {
//				str[i] = str[i] + 32;
//				//std::cout << str[i] << std::endl;
//			}
//			std::cout << str[i];
//		}
//		std::cout << "\nTry again? [ENTER/n]";
//		ch = _getch();
//	} while ((ch != 'n') && (ch != 'N'));
//}