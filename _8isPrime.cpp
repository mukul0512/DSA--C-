#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the value of n: " << endl;
    int n;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not prime for: " << i << endl;
        }
        else
        {
            cout << "Is prime for: " << i << endl;
        }
        i = i + 1;
    }
}