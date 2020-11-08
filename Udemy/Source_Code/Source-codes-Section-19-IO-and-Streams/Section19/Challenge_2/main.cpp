// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    string answer_key {};
    ifstream file {"../responses.txt"};
    
    if (!file)
        return 1;
    
    file >> answer_key;
    string name {}, answer {};
    int score {};
    double avg_score {};
    int num_of_students {};
    
    cout<<"\n"<<setw(20)<<left<<"Student"<<setw(5)<<"Score"<<endl;
    cout<<"---------------------------"<<endl;
    
    while (!file.eof()) {
        file >> name >> answer;
        score = 0;
        
        for(size_t i = 0; i < answer.length(); ++i)
            if (answer_key.at(i) == answer.at(i))
                score++;
        
        cout<<setw(25)<<left<<name<<setw(5)<<right<<score<<endl;
        num_of_students++;
        avg_score+=score;
    }
    
    avg_score = static_cast<double> (avg_score) / num_of_students;
    cout<<setw(25)<<left<<"Average Score"<<setw(5)<<right<<avg_score<<endl;
    file.close();
    cout << endl;
    return 0;
}

