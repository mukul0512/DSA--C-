#include <iostream>
using namespace std;
#include <math.h>

int power(int a, int b) {
    int ans = 1;
    for(int i = 1; i <= b; i++) {
        ans = ans * a;
    }
    return ans;
}
int main() {
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    int answer = power(a, b);
    cout << a << " to the power " << b << " is: " << answer << endl;
    return 0;
}