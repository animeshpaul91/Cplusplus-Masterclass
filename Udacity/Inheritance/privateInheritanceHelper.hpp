/*The header file for inheritance.*/

#include <iostream>
#include <string>
using namespace std;

//The base class
class Student
{
private:
    int id;

public:
    void setId(int idIn);
    int getId();
    Student();
    void setId();
};

Student::Student()
{
    id = 000000000;
}

void Student::setId(int idIn)
{

    id = idIn;
}

int Student::getId()
{
    return id;
}

//The derived class with Student as base class
class GradStudent : private Student
{
private:
    string degree;

public:
    GradStudent()
    {
        degree = "undelcared";
    }

    void setDegree(string degreeIn)
    {
        degree = degreeIn;
    }

    string getDegree()
    {
        return degree;
    }

    void setStudentId(int idIn)
    {
        setId(idIn);
    }

    int getStudentId()
    {
        return getId();
    }
};