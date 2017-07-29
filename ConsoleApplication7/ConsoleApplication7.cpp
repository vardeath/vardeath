//#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include<vector>
#include<algorithm>
#include<stdexcept>
#include <functional>
#include<iomanip>
#include "windows.h"
//#include "../../std_lib_facilities.h"

using namespace std;

string oper_name = " "; // наименование операции
						// выполняем рассчет выражения пользователя, возвращаем результат.
double operation(double x, double y, char z) {
	switch (z) {
	case '+': oper_name = "Сумма"; return(x + y);
	case '-': oper_name = "Разность"; return(x - y);
	case '*': oper_name = "Произведение"; return(x * y);
	case '/': oper_name = "Деление"; return(x / y);
	}
}

int main()
{
	setlocale(LC_CTYPE, "RUS");
	setlocale(LC_ALL, "");

	char oper = ' '; // знак математической операции
	string user_value1 = " "; // первое значение пользователя
	string user_value2 = " "; // второе значение пользователя
	double oper_trans1 = 0; // записываем значение первого операнда после перевода
	double oper_trans2 = 0; // записываем значение первого операнда после перевода
	int flag = 2;
	int flag2 = 2;
	vector<string> digits = { "zero", "one", "two", "three", "four", "five", "six", "seven","eight", "nine" };

	cout << "введите 2 операнда и оператор" << endl;
	cin >> user_value1 >> user_value2 >> oper;

	for (int i = 0; i < digits.size(); ++i) {
		if (user_value1 == digits[i]) {
			oper_trans1 = i;
			int flag = 1;
		}
		else {
			int flag = 0;
		}
		if (user_value2 == digits[i]) {
			oper_trans2 = i;
			int flag2 = 1;
		}
		else {
			int flag2 = 0;
		}
	}
	for (int i = 0; i < digits.size(); ++i) {

	}
	if (flag == 0) {
		oper_trans1 = stod(user_value1);
	}
	if (flag == 0) {
		oper_trans2 = stod(user_value2);
	}
	double result = operation(oper_trans1, oper_trans2, oper);

	cout << oper_name << " " << user_value1 << " и " << user_value2 << " " << "равно " << result << endl;

	system("pause");
}
