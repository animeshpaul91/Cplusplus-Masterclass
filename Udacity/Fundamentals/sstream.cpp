#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    float num;
    string input;

    cout<<"\nEnter the numberic string";
    getline(cin, input);
    stringstream(input) >> num;

    num += 100;
    cout<<num<<endl; //should print 200.25
    return 0;
}
