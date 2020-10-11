#include <iostream>
using namespace std;

int main() {
    int cents {};
    int parts[5] {};
    int factors[5] {100, 25, 10, 5, 1};
    cout << "My template" << endl;
    cout << "Enter an amount in cents: ";
    cin >> cents;
    
    for(int i {0}; i < 5; ++i)
    {
        parts[i] = cents / factors[i];
        cents %= factors[i];
    }
    
    cout <<"\nDollars  : "<<parts[0];
    cout <<"\nQuarters : "<<parts[1];
    cout <<"\nDimes    : "<<parts[2];
    cout <<"\nNickels  : "<<parts[3];
    cout <<"\nPennies  : "<<parts[4];
    cout << endl << endl;
    return 0;
}  