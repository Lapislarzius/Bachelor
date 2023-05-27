#include <iostream>
using namespace std;

int main(void)
{
    int n = 3;
    float a = 0, b = 3.2;
    int m;
    char c, e = 1;

    m = (n % 2) ? (-1 + n) : n;
    cout << "m: " << m << endl;
    a = (1 / 2) * b;
    cout << "a: " << a << endl;
    c = 4 < (1 << n);
    cout << "c: " << (int)c << endl;
    c = ((1 / e) / b) + a;
    cout << "c: " << (int)c << endl;

    return 0;
}