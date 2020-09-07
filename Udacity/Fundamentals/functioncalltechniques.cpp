#include<iostream>
using namespace std;

void callByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void callByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void callByPointers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;
    cout<<"\nInitial Values: ";
    cout<<"\nA = "<<a;
    cout<<"\nB = "<<b;

    callByValue(a, b);
    cout<<"\nAfter Calling CallByValue: ";
    cout<<"\nA = "<<a;
    cout<<"\nB = "<<b;

    a = 10, b = 20;
    callByReference(a, b);
    cout<<"\nAfter Calling CallByReference: ";
    cout<<"\nA = "<<a;
    cout<<"\nB = "<<b;

    a = 10, b = 20;
    callByPointers(&a, &b);
    cout<<"\nAfter Calling CallByPassingPointers: ";
    cout<<"\nA = "<<a;
    cout<<"\nB = "<<b;

    return 0;
}