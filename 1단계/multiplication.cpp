#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int ones = b % 10;
    int tens = b % 100 / 10;
    int hundreds = b / 100;
    
    cout << a * ones << '\n';
    cout << a * tens << '\n';
    cout << a * hundreds << '\n';
    cout << a * b << '\n';
}
