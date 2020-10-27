#include <iostream>
using namespace std;

int &sum(int a, int b)
{
  int *c = new int;
  *c = a + b;
  return *c;
}

int main() {
  int &s = sum(10, 20);
  cout << s << endl;
  delete &s;
  return 0;
}
