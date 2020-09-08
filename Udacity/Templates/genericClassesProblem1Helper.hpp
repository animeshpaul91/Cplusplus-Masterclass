/*header file*/

#include <iostream>
using namespace std;

template <class T>

class Multiplier
{
    T M1, M2, product;

public:
    void setM1(T M1)
    {
        this->M1 = M1;
    }

    void setM2(T M2)
    {
        this->M2 = M2;
    }

    void setProduct()
    {
        product = M1 * M2;
    }

    void printEquation()
    {
        cout << M1 << " * " << M2 << " = " << product;
    }
};