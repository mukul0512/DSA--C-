#include <iostream>
using namespace std;

// 1 -> Prime no
// 2 -> Not a prime no

bool isPrime(int n) {
    for(int i = 2; i < n; i++) {
        if(n % i == 0) { // Not a prime no
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    if(isPrime(n)) {
        cout << n << " is a prime no " << endl;
    }
    else {
        cout << n << " is not a prime no " << endl;
    }
}