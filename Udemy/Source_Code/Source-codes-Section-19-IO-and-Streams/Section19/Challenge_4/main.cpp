// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    ifstream inp_file {"../romeoandjuliet"};
    ofstream out_file {"../romeoandjulietcopy"};
    
    if (!inp_file || !out_file)
        return 1;
    
    string line {};
    size_t line_number {};
    
    while (getline(inp_file, line)) {
        if (line == "")
            out_file << endl;
        else
            out_file << setw(10) << left << ++line_number << line << endl;
    }
    
    cout << "File Copied" << endl;
    inp_file.close();
    out_file.close();
    return 0;
}

