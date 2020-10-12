#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char name[20] {};
    strcpy(name, "Animesh");
    strcat(name, " "); 
    strcat(name, "Paul");
    cout << name;
    cout << "\n" <<strlen(name);
    cout << "\nEnter your name: ";
    cin.getline(name, 20); 
    cout <<"\nYour name is: "<<name;
    
    for(size_t i {}; i < strlen(name); i++)
        if (isalpha(name[i]))
            name[i] = toupper(name[i]);
    
    cout <<"\nYour name in uppercase is: "<<name;
    cout << endl;
    return 0;
}  