#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r) // binomial coefficient
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    int ans = numerator / denominator;
    return ans;
}

int main()
{
    int n, r;
    cout << "Enter the value of n and r: " << endl;
    cin >> n >> r;
    cout << "The binomial coefficient is: " << nCr(n, r) << endl;
    return 0;
}