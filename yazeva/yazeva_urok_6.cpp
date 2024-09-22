
#include <iostream>
#include <string>
using namespace std;
int main()
{
    //zadanie 1
    cout << "_______zadanie 1________" << endl;
    int t = 1, g = 4, h = 6, f = 3, r = 7;
    int a, v, b, o, e, w, s;
    a = t + g;
    cout << " a = t+g = 1+4 =5  =  " << a << endl;
    v = h - g;
    cout << " v = h-g = 6-4 =2  =  " << v << endl;
    b = r * f;
    cout << " b = r*f = 7*3 =21  =  " << b << endl;
    o = h / f;
    cout << " o = h/f = 6/3 =2  =  " << o << endl;
    e = h % g;
    cout << " e = h%g = 6%4 =2  =  " << e << endl;
    w = ++t;
    cout << " w = t+1 = 1+1 =2  =  " << w << endl;
    s = --r;
    cout << " s = r-1 = 7-1 =6  =  " << s << endl;

    //zadanie 2
    cout << "_______zadanie 2________" << endl;
    cout << boolalpha;
    int q = 1, z = 5, n = 3, p = 2, m =2;
    cout << "true =  " << (p == m) << endl;
    cout << "false =  " << (p == z) << endl;

    cout << "true =  " << (n != m) << endl;
    cout << "false =  " << (p != m) << endl;

    cout << "true =  " << (z>q) << endl;
    cout << "false =  " << (n<q) << endl;

    cout << "true =  " << (p >= m) << endl;
    cout << "false =  " << (m <= q) << endl;

    //zadanie 3
    cout << "_______zadanie 3________" << endl;
    int x = 0, l = 4, j = 9, y = 2, c = 2, u = 4;
    cout << "true =  " << (y==c && l==u) << endl;
    cout << "false =  " << (y==c && c==u) << endl;

    cout << "true =  " << (y == c || c == u) << endl;
    cout << "false =  " << (y == j || l == x) << endl;

    cout << "true =  " << (u != 0) << endl;
    cout << "false =  " << (c == y) << endl;
}

