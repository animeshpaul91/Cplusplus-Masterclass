// constructing vectors
#include <iostream>
#include <vector> //Need to include the vector library!
using namespace std;

int main()
{
    //creating a vector of integers
    vector<int> vectorInts;
    cout << "vectorInts has " << vectorInts.size() << " elements";

    //Changing the size of vectorInts to 6
    vectorInts.resize(6);
    cout << "\nvectorInts now has " << vectorInts.size() << " elements\n";

    return 0;
}