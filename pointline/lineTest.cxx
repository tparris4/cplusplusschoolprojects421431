#include <iostream>  //provides cout and cin
#include <cstdlib> //provides the all important EXIT_SUCCESS
#include "point.h"   //provides our mug class

#define PI 3.1415926535897932384626

using namespace std;
int main()
{
	line line1, line2;
	line z;
	line();
	int userPoint;
	cin >> userPoint;
	z.line(userPoint)
	z.line(userPoint, userPoint);
	z.slope();
	z.translate(X,Y);
	z.reflect_x();
	z.reflect_y();
	z.yintercept(slope);
	int equals = 0;
	cin  >> equals;
	if (equals = 1){

	cout << "set line equal" << "\n";
	line1 = line2;
	}
	if (line1.get_x()) == line2.get_x())
	{
	    cout << "Y ="<<line1.get_y() << "\n";
	    cout << "THe line equation is infinite" << "\n";
	}
    else if (line1.get_y() == line2.get_y())
    {
        cout << "X ="<<line1.get_x() << "\n";
        cout << "The line equation is the value of y" << "\n";
    }
    else
    {
    cout << "The line equation = " << slope << "* x +" << yintercept;
    }

}
