#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int i = 0; 
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = (ans + pow(2, i));
        }
        n = n / 10;
        i++;
    }
    cout << "Answer is: " << ans << endl;
}