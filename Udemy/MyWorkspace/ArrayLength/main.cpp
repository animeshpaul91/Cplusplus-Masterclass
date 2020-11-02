#include <iostream>
#include <string>
using namespace std;

// To execute C++, please define "int main()"
int main() {
  string words[] = { "First ", "Second ", "Hello, ", "World!", "\n" };
  size_t length = sizeof(words) / sizeof(words[0]); //good way to get length of an array
  cout << length << endl;
  for (const string& word : words) {
    cout << word;
  }
  return 0;
}
