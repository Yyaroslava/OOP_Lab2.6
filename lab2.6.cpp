// lab2.6.cpp
#include <iostream>
#pragma pack(1)
#include "Date.h"

int main() {
    Date::Triad a, b, c, d;
    Date f(0, 0, 0);

    int result;

    cout << "Enter first triad: " << endl;
    cin >> a;

    cout << "Enter second triad: " << endl;
    cin >> b;
    cout << endl;

    cout << "Triad comparison: " << endl;
    result = f.Comparison(a, b);
    f.TriadResult(result);
    cout << endl;

    cout << "Enter first date: " << endl;
    cin >> c;

    cout << "Enter second date: " << endl;
    cin >> d;
    cout << endl;

    cout << "Date comparison: " << endl;
    result = f.Comparison(c, d);
    f.date1(result);
    cout << endl;

    cout << "A++ " << endl;
    cout << a++ << endl;

    cout << "A-- " << endl;
    cout << a-- << endl;

    cout << "++A " << endl;
    cout << ++a << endl;

    cout << "--A " << endl;
    cout << --a << endl;

    return 0;
}