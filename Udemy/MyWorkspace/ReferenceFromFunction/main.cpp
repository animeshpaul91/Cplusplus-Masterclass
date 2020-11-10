#include <iostream>
using namespace std;
int n = 12;

int &test()
{
  return n;  
}

// To execute C++, please define "int main()"
int main() {
  cout << n << endl;
  int a = test();
  cout << a << endl;
  test() = 13; // Same as &n = 13;
  cout << n << endl;
  return 0;
}
