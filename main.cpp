#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
#include <cstring>
#include <Windows.h>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int32_t MAX_LENGHT = 300;

	char s1[MAX_LENGHT];
	char s2[MAX_LENGHT];
	
	std::cout << "введите первую строку: \n";
	std::cin.getline(s1, MAX_LENGHT);

	std::cout << "введите вторую строку: \n";
	std::cin.getline(s2, MAX_LENGHT);
	char* s3 = new char[strlen(s1) + strlen(s2) + 1];
	s3[0] = '\0';

	MakeString(s1, s2, s3);
	std::cout << s3;

	delete[] s3;

	return 0;
}