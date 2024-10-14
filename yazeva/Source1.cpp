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
int main()
{
	salsa("chislo", 3.2)
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
}