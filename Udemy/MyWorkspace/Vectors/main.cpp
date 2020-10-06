#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    cout << "\nVectors" << endl;
    vector<int> test_scores {100, 95, 99, 87, 88};
    cout<<test_scores[0]<<endl;
    cout<<test_scores[1]<<endl;
//  cout<<test_scores[5]<<endl; Does not check out of bound error

    cout<<"\nVectors can also be accessed by .at()\n";
    cout<<test_scores.at(2)<<endl;
    cout<<test_scores.at(3)<<endl;
//  cout<<test_scores.at(5)<<endl; Does bounce checking
    test_scores.at(4) = 100; // Assignment is also done like this
    
    //Append operation 
    test_scores.push_back(80);
    test_scores.push_back(90);
    cout<<"\nThere are: "<<test_scores.size()<<" items in the vector\n"; 
    
//  vector<char> vowels (5); Creates a vector of 5 characters each initialized to 0.
//  vector<int> exam_scores (3); all of which will be initialized to 0
//  vector<int> exam_scores (3, 100); all of which will be initialized to 100

    cout << "Enter a test score: \n";
    int score {0};
    cin >> score;
    test_scores.push_back(score);
    cout<<"\nThere are now: "<<test_scores.size()<<" items in the vector\n";
    
    vector <vector<int>> movie_ratings
    {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
    };
    
    cout << "Here are the movie ratings of reviewer 1: \n";
    cout << movie_ratings.at(0).at(0) <<endl;
    cout << movie_ratings.at(0).at(1) <<endl;
    cout << movie_ratings.at(0).at(2) <<endl;
    cout << movie_ratings.at(0).at(3) <<endl;
    cout << endl;
    return 0;
}  