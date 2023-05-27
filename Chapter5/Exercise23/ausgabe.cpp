#include <iostream>
using namespace std;

int main(void)
{
    int a = 10, b, c;                           // a=10  b=null  c=null
    a *= 5 + 10;                                // a=150
    cout << a << endl;                          //
    a *= b = c = 20;                            // a=3000 b=c=20
    cout << a << ", " << b << endl;             //
    b = b == c;                                 // b=1
    cout << b << endl;                          //
    a >>= b + 2;                                // 3000 in binary 101110111000 then shift values 3 to right 000101110111 convert to dec a=375
    cout << a << endl;                          //
    a &= 0x3e;                                  // 0x3e in binary 000000111110 & 000101110111 = 000000110110 in dez a=54
    cout << a << endl;                          //
                                                //
    a = 3;                                      // a=3
    b = 2;                                      // b=2
    a *= b += a <<= a + b;                      // a=3<<(3+2)=96 -> b = 2+96=98 -> a = 96*98 = 9408
    cout << "a= " << a << ", b= " << b << endl; //

    return 0;
}