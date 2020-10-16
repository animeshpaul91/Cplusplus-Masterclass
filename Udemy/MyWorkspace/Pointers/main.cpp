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
        
    // Dynamic Memory Allocation 
    int *int_ptr {nullptr};
    int_ptr = new int; // Memory allocated from the heap
    *int_ptr = 5;
    cout << "Heap Memory Content: "<<*int_ptr<< endl;
    delete int_ptr; // free allocated memory and release it back to heap
    
    int *array_ptr {nullptr};
    size_t size {};
    
    cout << "Enter the size of the Array: ";
    cin >> size;
    
    array_ptr = new int[size]; //Dynamically allocate required memory from heap
    
    if (array_ptr)
        cout << "Memory Allocated at base address: "<< array_ptr << endl;
    else
        cout << "Memory Allocation failed";
    
    delete [] array_ptr;
        
    cout << endl << endl;
    return 0;
}  