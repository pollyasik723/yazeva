#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	cout << "                      ������������� �����������" << endl;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << boolalpha;
	string y = "3"; 
	int h = 10;
	for (int i =0; i<h; i++)
	{
		cout << y << endl;
		y = y + "3";
	}

	cout << "                     �������������� �����������" << endl;
	int t = 10;
	for (int i = 0; i <= t; i++)
	{
		for (int c = t;c > i;c--)
		{
			cout << " ";
		}
		for (int c = 0;c <= i * 2;c++) 
		{
			cout << "&";
		}
		cout << endl;
	}

	cout << "                      ������� 3 � �������" << endl;
	int u1 = 0, u2 = 5, u3 = 15;
	while (u1 < u2 && u3 > 10)
	{
		u1++;
		cout << "(����� 1 ������ ��� ����� ����� 2 -)  " << u1 << "<=" << u2 << " (� ����� 3 ������ 10 -)  " << u3 << "<10" << endl;
		u3--;
	}


}