// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file {"../romeoandjuliet.txt"};
    if (!file)
        return 1;
    
    string substring {}, word {};
    size_t total_words {}, occurences {};
    cout << "Enter the substring to search for: ";
    getline(cin, substring);
    while (file >> word)
    {
        total_words++;
        if (word.find(substring) != string::npos)
            occurences++;
    }
    
    cout << endl;
    cout << total_words << " were searched" << endl;
    cout << "The Substring "<<substring<<" was found "<<occurences<<" times";
    cout << endl;
    file.close();
    
    return 0;
}

