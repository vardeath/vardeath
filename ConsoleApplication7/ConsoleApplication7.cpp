#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
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

string oper_name = " "; // ������������ ��������
						// ��������� ������� ��������� ������������, ���������� ���������.
double operation(double x, double y, char z) {
	switch (z) {
	case '+': oper_name = "�����"; return(x + y);
	case '-': oper_name = "��������"; return(x - y);
	case '*': oper_name = "������������"; return(x * y);
	case '/': oper_name = "�������"; return(x / y);
	}
}

int main()
{
	setlocale(LC_CTYPE, "RUS");
	setlocale(LC_ALL, "");

	char oper = ' '; // ���� �������������� ��������
	string user_value1 = " "; // ������ �������� ������������
	string user_value2 = " "; // ������ �������� ������������
	double oper_trans1 = 0; // ���������� �������� ������� �������� ����� ��������
	double oper_trans2 = 0; // ���������� �������� ������� �������� ����� ��������

	vector<string> digits = { "zero", "one", "two", "three", "four", "five", "six", "seven","eight", "nine" };

	cout << "������� 2 �������� � ��������" << endl;
	cin >> user_value1 >> user_value2 >> oper;

	for (int i = 0; i < digits.size(); ++i) {
		if (user_value1 == digits[i]) {
			oper_trans1 = i;
		}
		if (user_value2 == digits[i]) {
			oper_trans2 = i;
		}
	}
	if (oper_trans1 == 0) {
		oper_trans1 = std::stod(user_value1);
	}
	if (oper_trans2 == 0) {
		oper_trans2 = std::stod(user_value2);
	}

	double result = operation(oper_trans1, oper_trans2, oper);

	cout << oper_name << " " << user_value1 << " � " << user_value2 << " " << "����� " << result << endl;

	system("pause");
}