#include <iostream>
 
using namespace std;

//TODO: Add all necessary functions and 
//Overload the '+' sign 
//To achieve the required total

class Shape 
{
    private:
      int length;     // Length of a box
      int width;
      
    public:
      // Constructor definition
      Shape(int l = 2, int w = 2) 
      {
         length = l;
         width = w;
      }
      
      int getLength()
      {
          return length;
      }
      
      int getWidth()
      {
          return width;
      }
	  
      double Area() 
      {
         return length * width;
      }
      
      int operator + (Shape shape1)
      {
        int total_length = getLength() + shape1.getLength();
        int total_width = getWidth() + shape1.getWidth();
        return total_length * total_width;
      }
};
