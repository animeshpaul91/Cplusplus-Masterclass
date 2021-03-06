#include <iostream>
using namespace std;

// To execute C++, please define "int main()"
int main() {
  int a {10};
  int b {a}; // b is a copy of a in a different memory location
  
  cout << "Values: "<<a<<" "<<b<<endl;
  cout << "Memory Addresses: "<<&a<<" "<<&b<<endl;
  
  cout << "Making c a reference to a: "<<endl;
  const int &c {a}; // References cannot be null. They have to point to a memory location
  cout << "Memory Addresses: "<<&a<<" "<<&c<<endl;
  // c is a different identifier (symbol) pointing to the same memory location as a
  
  cout << "Changing value of a: "<<endl;
  a = 100;
  cout << c << endl << endl;
  
  return 0;
}
