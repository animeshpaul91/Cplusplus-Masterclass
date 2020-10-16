#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

char getSelection()
{
    char choice;
    cout <<"\n------------------MENU-------------------\n";
    cout <<"\n P - Print Numbers";
    cout <<"\n A - Add a Number";
    cout <<"\n M - Display Mean of the Numbers";
    cout <<"\n S - Display the Smallest Number";
    cout <<"\n L - Display the Largest Number";
    cout <<"\n C - Clear Vector";
    cout <<"\n Q - Quit";
    cout <<"\n\nEnter your choice: ";
    fflush(stdin);
    cin >> choice;
    return choice;
}

void display(const vector<int> &vec)
{
    if (vec.size() == 0)
        cout << "\n []";
    else
    {
        cout << "\n[ ";
        for (int num: vec)
            cout << num << " ";
        cout << "]";
    }
}

void append(vector<int> &vec, int num)
{
    vec.push_back(num);
}

double getMean(const vector<int> &vec)
{
    if (vec.size() == 0)
        return 0;
        
    int sum {};
    for (int num: vec)
        sum += num;
    return (double) sum / vec.size();
}

int getMax(const vector<int> &vec)
{
    if (vec.size() == 0)
        return 0;
        
    int imax = INT_MIN;
    for(int num: vec)
        if (num > imax)
            imax = num;
    return imax;
}

int getMin(const vector<int> &vec)
{
    if (vec.size() == 0)
        return 0;
        
    int imin = INT_MAX;
    for(int num: vec)
        if (num < imin)
            imin = num;
    return imin;
}

int main() {
    vector<int> vec;
    char choice;
    int num {};
    
    do 
    {
        choice = getSelection();
        switch(choice)
        {
            case 'P':
            case 'p': display(vec);
                      break;
            case 'A':
            case 'a': 
                      cout << "\nEnter the Element: ";
                      cin >> num;          
                      append(vec, num);
                      break;
            case 'M':
            case 'm':
                      cout << "\n The Mean is: "<<getMean(vec);
                      break;
            case 'S':
            case 's':
                      cout << "\n The Minimum is: "<<getMin(vec);
                      break;
            case 'L':
            case 'l':
                      cout << "\n The Maximum is: "<<getMax(vec);
                      break;
            case 'C':
            case 'c':
                      vec.clear();
                      break;
            case 'q':
            case 'Q':
                      cout << "\nExiting Application\n\n";
                      break;
            default:
                      cout << "\n Invalid Choice. Please enter one of the choices from menu";
                      break;
                    
        }
        
    } while (choice != 'q' && choice != 'Q');
    
    return 0;
}  