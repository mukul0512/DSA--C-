#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    char operation;
    cout << "Enter the operation you want to perform: " << endl;
    cin >> operation;

    switch(operation) {
        case '+': cout << "Your res is: "<< (a + b) << endl;
            break;
        case '-': cout << "Your res is: "<< (a - b) << endl;
            break;
        case '*': cout << "Your res is: "<< (a * b) << endl;
            break;
        case '/': cout << "Your res is: "<< (a / b) << endl;
            break;
        case '%': cout << "Your res is: "<< (a % b) << endl;
            break;
        default: cout << "Please enter valid operation " << endl;
    }
}