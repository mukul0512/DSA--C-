#include <iostream>
using namespace std;

int main()
{
    cout << "Namaste Dunia " << endl;

    int a = 123;
    cout << "The value of a is: " << a << endl;

    int intSize = sizeof(a);
    cout << "The size of integer a is: " << intSize << " byte" << endl;

    bool bl = true;
    cout << "The value of bl is: " << bl << endl;

    bool boolSize = sizeof(bl);
    cout << "The size of boolean bl is: " << boolSize << " bit" << endl;

    float fl = 1.2;
    cout << "The value of fl is: " << fl <<  endl;

    float floatSize = sizeof(fl);
    cout << "The size of float fl is: " << floatSize << " byte" << endl;

    double dl = 1.23;
    cout << "The value of dl is: " << dl << endl;

    double doubleSize = sizeof(dl);
    cout << "The size of double dl is: " << doubleSize << " byte" << endl;

    char ch = 'a';
    cout << "The value of ch is: " << ch << endl;

    char charSize1 = sizeof(ch);
    cout << "The size of character ch is: " << charSize1 << " bit" << endl;

    int res = 1;
    int alpha = 1 + 64;
    char ch1 = (char)alpha; // type-casting
    cout << "The value of ch1 is: " << ch1 << endl; 

    char charSize2 = sizeof(ch1);
    cout << "The size of character ch1 is: " << charSize2 << " bit" << endl;
}