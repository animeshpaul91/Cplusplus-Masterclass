/* A static member variable means that the variable is shared between all instances of the class.

That means, instead of each instance having a copy of the variable, all instances share this variable. It is often preferred to save space especially when the variable is an object of a class. Likewise for static functions and classes. There is only one copy of the variable. The idea is that creating and cleaning up the instances can be a computationally expensive process, if it can be made static, it is a good idea to speed up execution of the program.

On the flip side, it can also be expensive to use a static variable. If using a static variable requires the CPU to fetch the variable from slower memory, rather than having it in the cache or stack. Each fetch from slower memory slows down execution time. */

//Static Class Members
#include <iostream>
using namespace std;

class A
{
public:
    static int integer;

    int getInt();
};

int A::integer = 1;

int A::getInt()
{
    return integer;
}

int main()
{
    A firstInstance;
    A secondInstance;

    cout << "\nfirstInstance = " << firstInstance.getInt();
    cout << "\nsecondInstance = " << secondInstance.getInt();
    cout << "\n\nSet secondInstance.integer = 2";
    secondInstance.integer = 2;
    cout << "\n\nfirstInstance = " << firstInstance.getInt();
    cout << "\nsecondInstance = " << secondInstance.getInt();

    return 0;
}