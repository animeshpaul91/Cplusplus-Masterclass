#include <iostream>
using namespace std;

int main() {
    int arr[] {5, 10, 15, 20, 25, 30};
    int sum = 0;
    
    for (int num: arr)
        sum += num;
    
    cout << sum <<endl;
    return 0;
}  