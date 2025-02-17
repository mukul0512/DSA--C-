#include <iostream>
using namespace std;

int main() {
    int i = 7;
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << "the value of a is: " << a << endl;
    cout << "the value of b is: " << b << endl;
    cout << "the value of c is: " << c << endl;
    cout << "pre-increment of (++i) is: " << (++i) << endl;
    cout << "post-increment of (i++) is: " << (i++) << endl;
    cout << "post-decrement of (i--) is: " << (i--) << endl;
    cout << "pre-decrement of (--i) is: " << (--i) << endl;
 }