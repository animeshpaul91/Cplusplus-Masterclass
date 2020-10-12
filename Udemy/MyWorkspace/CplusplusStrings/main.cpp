#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; // Apple. This is a deepcopy
    string s6 {s1, 0, 3}; // App
    string s7 (10, 'X'); // XXXXXXXXXX
    
    cout << s0 << endl;
    cout << s0.length() << endl;
    
    cout <<"\n Initialization \n ---------------------------------";
    
    cout <<"\n s1 initialized to: "<<s1;
    cout <<"\n s2 initialized to: "<<s2;
    cout <<"\n s3 initialized to: "<<s3;
    cout <<"\n s4 initialized to: "<<s4;
    cout <<"\n s5 initialized to: "<<s5;
    cout <<"\n s6 initialized to: "<<s6;
    cout <<"\n s7 initialized to: "<<s7;
    
    cout <<"\n\n Comparing Strings \n -------------------------------";
    cout << boolalpha;
    cout <<"\n "<< (s1 == "Apple");
    cout <<"\n "<< (s1 < s2);
    cout <<"\n "<< (s1 == s4);
    
    // c++ strings are mutable 
    s1[0] = 'M';
    cout <<"\n s1 is now: "<< s1;
    s1[0] = 'A';
    s3 = "Watermelon";
    s3 = s5 + " and " + s2 + " juice";
    cout <<"\n s3 is now: "<<s3;
//    s3 = "Nice " + "cold " + "weather"; // Compile error. Cannot concatenate two cstyle string literals
    
    string full_name;
    cout <<"\n Enter your full name: ";
    getline(cin, full_name);
//    string full_name = "My full name is Animesh Paul";
    cout <<"\n Your Full name is: "<<full_name;
    string sub;
    cout << "\n Enter the substring to search: ";
    getline(cin, sub);
    
    size_t index = full_name.find(sub);
    
    if (index != string::npos)
        cout <<"\n Substring found at: "<<index<<" position";
    else
        cout <<"\n Substring does not exist in full name";
        
        
    cout << endl << endl;
    return 0;
}  