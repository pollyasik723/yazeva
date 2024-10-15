#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "summa = " << Sum(0, 11) << endl;
	string st = "Hello world";
	int n = st.lenght();
	char* ar new char[n];
	for (int i = 0; i < st.lenght(); i++) {
		ar[i] = st[i];
	}
	for (int i = 0; i < n; i++) {
		cout << ar[i] << endl;
	}
}