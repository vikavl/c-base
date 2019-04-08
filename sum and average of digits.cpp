#include <iostream>
#include <conio.h>

int main() {
//===========================================SUM AND AVERAGE OF DIGITS IN NUMBER==========================================//
	unsigned num = 12345;
	char ch;
	do {
		std::cout << "Enter number "; std::cin >> num;
		double sum = 0;
		int k = 0;
		while (num != 0) {
			k++;
			sum += num % 10;
			num /= 10;
		}
		double ave = 0;
		ave = (sum / k);
		std::cout <<"Sum of digits is "<< sum << "\nAverage of digits is " << ave << std::endl;
		std::cout << "Try again? [ENTER/n]\n";
		ch = _getch();
	} while ((ch != 'n') && (ch != 'N'));
}