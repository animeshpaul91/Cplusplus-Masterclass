#include <iostream>
#include <vector>
using namespace std;

void challenge()
{
    vector<int> vector1;
    vector<int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    vector2.push_back(100);
    vector2.push_back(200);
    
    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    
    cout << "\n The 2D vector is: \n";
    cout <<vector_2d.at(0).at(0)<<endl;
    cout <<vector_2d.at(0).at(1)<<endl;
    cout <<vector_2d.at(1).at(0)<<endl;
    cout <<vector_2d.at(1).at(1)<<endl;
    vector1.at(0) = 1000;
    
    cout<<"\nAfter Mutation: "<<endl;
    cout <<vector_2d.at(0).at(0)<<endl;
    cout <<vector_2d.at(0).at(1)<<endl;
    cout <<vector_2d.at(1).at(0)<<endl;
    cout <<vector_2d.at(1).at(1)<<endl;
    cout<<vector1.at(0);
    cout<<endl;
}