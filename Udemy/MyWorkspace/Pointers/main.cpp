#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr {nullptr};
    vector_ptr = &stooges;
    
    cout << "First Stooge: "<< (*vector_ptr).at(0) << endl;
    
    // Iterating through Vector Pointer 
    for (auto stooge: *vector_ptr) // *vector_ptr resolves to stooges
        cout << stooge << endl;
        
    cout << endl << endl;
    return 0;
}  