#include <iostream>
#include <map>
using namespace std;

// To execute C++, please define "int main()"
int main() {
  map<string, string> m {
    {"Animesh", "Paul"}, 
    {"Sandeep", "Gohain"}, 
    {"Boris", "Laishram"}
  };
  
  string key = "Animesh";
  int c = m.count(key);
  
  if (c)
    cout << "Value against key: "<< key <<" is: " << m[key];
  else 
    cout << "Key is not found";
  
  cout << endl;
  return 0;
}
