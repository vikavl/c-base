//#include <iostream>
//#include <conio.h>
//
//int func(int temp) { //sum of 3-digit number (in elements)
//	int sum = 0;
//	sum = (temp / 100) + ((temp / 10) - ((temp / 100) * 10)) + (temp - ((temp / 10) * 10));
//	return sum;
//}
//
//int main() {
////==================================================LUCKY TICKET========================================================//
//	int n;
//	char ch;
//	do {
//		std::cout << "Enter six-digit number "; std::cin >> n;
//	if ((n / 100000) > 10) {
//		std::cout << "Your number is not 6-digit" << std::endl;
//	}
//	else {
//		int sum1 = 0;
//		int sum2 = 0;
//		int temp1 = n / 1000;
//		int temp2 = n % 1000;
//		sum1 = func(temp1);
//		sum2 = func(temp2);
//		if (sum1 == sum2) {
//			std::cout << "Congrats! You have lucky ticket!" << std::endl;
//		}
//		else {
//			std::cout << "Sorry! Try again!" << std::endl;
//		}
//	}
//	std::cout << "Try again? [ENTER/n]" << std::endl;
//	ch = _getch();
//	} while ((ch != 'n') && (ch != 'N'));
//}