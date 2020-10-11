#include <iostream>
#include <vector>
#include <iomanip>

void forLoopVector()
{
    vector<int> vec {10, 11, 12, 13, 14};
    
    cout << "\nLooping through Vector\n";
    for(int num: vec)
        cout << num <<"\t";
    
    cout << endl;
}

// Range Based For Loops

void forRangeLoops()
{
    vector<double> temps {87.2678, 77.197, 80.0789, 72.5250};
    
    double average_temp {};
    double running_sum {};
    
    for(auto temp: temps) // auto automatically identifies the type of the collection
        running_sum += temp;
    
    average_temp = running_sum / temps.size();
    
    cout << fixed << setprecision(2);
    cout << "Average Temperatature is: "<<average_temp<< endl;
    
    for(auto c: "Animesh Paul")
        cout << c;
        
    cout << endl;
}