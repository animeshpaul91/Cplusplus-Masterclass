//
// Created by animesh on 9/6/20.
//

#include "sstream.h"
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
