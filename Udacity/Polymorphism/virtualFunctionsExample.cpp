/* What is a virtual function?

Virtual function is a function in the base class with keyword virtual declared, and the goal is to let the user know that this function is meant to be overridden (or redefined) by the derived class.

The program below is an example of a virtual function in use. Execute the code with the virtual keyword and then run it without the virtual keyword.

You should see a difference in the output. */


#include <iostream>

using namespace std;
class A
{
public:
    //TODO: run the code with and without
    //the keyword 'virtual'
    void virtual getMe();
    A();
};
void A::getMe()
{
    cout << "A!";
}
A::A()
{
    cout << " A constructor";
}
class B : public A
{
public:
    void getMe();
    B();
};
B::B()
{
    cout << " B constructor";
}
void B::getMe()
{
    cout << "B!";
}

int main()
{
    cout << "\nCreating instances:";
    A *instanceB;
    A *instanceA;
    cout << "\nCreating 'new' instances:";
    cout << "\n\tinstanceB: ";
    instanceB = new B();
    cout << "\n\tinstanceA: ";
    instanceA = new A();

    cout << "\ninstanceB->getMe() produces: ";
    instanceB->getMe();
    cout << "\ninstanceA->getMe() produces: ";
    instanceA->getMe();
    return 0;
}