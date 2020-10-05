#include "imports.h"

void getSizes()
{
    cout << "Size Information " << endl;
    cout << "=========================="<< endl;
    cout << "char: "<< sizeof(char) << " bytes" << endl;
    cout << "int: "<< sizeof(int) << " bytes" << endl;
    cout << "unsigned int: "<< sizeof(unsigned int) <<" bytes"<< endl;
    cout << "short: "<< sizeof(short) << " bytes" << endl;
    cout << "long: "<< sizeof(long) << " bytes" << endl;
    cout << "long long: "<< sizeof(long long) << " bytes" <<endl;
    cout << endl;
    cout << "=========================="<< endl;
    cout << "float: "<< sizeof(float) << " bytes" << endl;
    cout << "double: "<< sizeof(double) << " bytes" << endl;
    cout << "long double: "<< sizeof(long double) << " bytes" << endl;
    cout << endl;
    cout << "=========================="<< endl;
    cout << "Minimum Values"<<endl;
    cout << "char: "<< CHAR_MIN << endl;
    cout << "int: "<< INT_MIN << endl;
    cout << "short: "<< SHRT_MIN << endl;
    cout << "long: "<< LONG_MIN << endl;
    cout << "long long: "<< LLONG_MIN << endl;
    cout << endl;
    cout << "Maximum Values"<<endl;
    cout << "char: "<< CHAR_MAX << endl;
    cout << "int: "<< INT_MAX << endl;
    cout << "short: "<< SHRT_MAX << endl;
    cout << "long: "<< LONG_MAX << endl;
    cout << "long long: "<< LLONG_MAX << endl;
    cout << endl;
    cout << "Using sizeof with var names" <<endl;
    int age {21};
    cout <<"\nage is "<<sizeof age<<" bytes";
    double wage {22.24};
    cout <<"\nwage is "<<sizeof wage<<" bytes";
    cout<<endl<<"\n";
}
