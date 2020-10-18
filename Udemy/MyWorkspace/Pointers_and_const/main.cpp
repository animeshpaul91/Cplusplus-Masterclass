#include <iostream>
using namespace std;

int main() {
    // Pointers to constants
    int high_score {100}; 
    int low_score {65};
    
    const int *score_ptr {&high_score};
//    *score_ptr = 86; // Error
    score_ptr = &low_score;
    
    // Constant pointers
    int *const score_ptr1 {&high_score};
    *score_ptr1 = 86; // ok
//    score_ptr = &low_score; // Error

//    constant pointer to constants
    const int *const score_ptr2 {&high_score};
//    *score_ptr1 = 86; // Error
//    score_ptr = &low_score; // Error
    
    return 0;
}  