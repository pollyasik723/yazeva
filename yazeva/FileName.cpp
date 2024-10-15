#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
void salsa(string a, float b) {
	cout << a << " " << b << endl;
}
float sum(float a, float b) {
	return a + b;
}
float kvadr(float a) {
	return a * a;
}
float del(float a, float b) {
	return a / b;
}
float vychit(float a, float b) {
	return a - b;
}
float umno(float a, float b) {
	return a * b;
}
float plus_minus(float a) {
	if (a < 0) {
		cout << "otricatelnoe = ";
		return a;
	}
	else {
		cout << "polozitelnoe = ";
		return a;
	}
}
float chet(int a) {
	if (a % 2 == 0) {
		cout << "chetnoe = ";
		return a;
	}
	else {
		cout << "ne chetnoe = ";
		return a;
	}
}
int main()
{
	salsa("chislo", 3.2);
	salsa("summa = ", sum(2.0, 3.0));
	salsa("kvadr = ", kvadr(8.0));
	salsa("delenie = ", del(6.0, 3.0));
	salsa("vychit = ", vychit(2.0, 3.0));
	salsa("umno = ", umno(2.0, 3.0));
	salsa("kakoe chislo = ", plus_minus(-12.0));
	salsa("kakoe chislo = ", chet(12));
	float a = 7.0, b = 11.0;
	cout << "summa = " << a << " and " << b << "  = " << sum(a, b) << endl;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}