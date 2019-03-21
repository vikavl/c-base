#include <stdio.h>
#include <iostream>
#include <cmath>
#include <conio.h>
#include <iomanip>

//квадратное уравнение
int main() {
	float a, b, c, D, x1, x2, x;

	std::cout << "Enter a="; std::cin >> a;
	std::cout << "Enter b="; std::cin >> b;
	std::cout << "Enter c="; std::cin >> c;

	D = pow(b, 2) - (4 * a*c);

	if (D >= 0) {
		if (a == 0) {
			x = (-c) / b;
			std::cout << "x=" << x << std::endl;
		}
		else {
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			std::cout << "x1=" << x1 << std::endl;
			std::cout << "x2=" << x2 << std::endl;
		}

	}
	else printf("\nSorry, we don`t have roots");

	system("pause");
	return 0;
}