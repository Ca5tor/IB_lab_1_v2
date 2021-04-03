#include <iostream>
#include <string>
#include <ctime>

void fun(std::string ind) {
	std::string little_en = "abcdefghijklmnopqrstuvwxyz";
	std::string big_en = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int n = ind.length(); // Длина индефикатора
	int N = n * n * n * n;
	int num = N % 100, b6, b7;

	num < 10 ? b6 = 0 : b6 = num / 10;
	b7 = num % 10;

	char password[8];
	password[0] = little_en[rand() % 10];
	password[1] = little_en[rand() % 10];
	password[2] = little_en[rand() % 10];
	password[3] = big_en[rand() % 10];
	password[4] = big_en[rand() % 10];
	password[5] = b6 + 48;
	password[6] = b7 + 48;
	password[7] = '\0';

	std::cout << password << std::endl;
}
void main() {
	srand(time(NULL));
	std::string ind = "";
	std::cout << "Enter identifier: ";
		std::cin >> ind;
	std::cout << std::endl;
	std::cout << "Password: ";
		fun(ind);
	std::cout << std::endl;

	system("pause");
}
