// constructing vectors
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //creating a vector of integers
    vector<int> vectorInts;
    //creating an iterator for the vector
    vector<int>::iterator it;

    cout << "vectorInts has " << vectorInts.size() << " elements\n";

    cout << "\n\nAdding four elements to the vector\n";
    //assigning the value 3 to 4 elements of the vector
    vectorInts.assign(4, 3); //assign overwrites previous elements
    cout << "vectorInts has " << vectorInts.size() << " elements\n";

    //printing the contents of vectorInts
    cout << "VectorInts has these elements:\n";
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        cout << *it << " ";

    return 0;
}
