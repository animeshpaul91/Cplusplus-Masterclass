#include <iostream>
using namespace std;

void swap(int *a, int *b) // Implicit Return
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

// To execute C++, please define "int main()"
int main() {
  int a = 10, b = 20;
  int *pa = &a, *pb = &b;
  cout << "Before Swapping: "<<endl;
  cout <<a<<" "<<b<<endl;
  swap(pa, pb);
  cout << "After Swapping: "<<endl;
  cout <<a<<" "<<b<<endl;
  return 0;
}
