#include <iostream> //we are adding ostream and istream
#include <cstdlib>
#include "point.h"
#include "math.h"
using namespace std;

//	yintercept = -(m) * x + y;
//	y = slope * (x + yintercept)

//pre-condition: private points p1 and p2
//post-condition: p1 and p2's x and y values are set to make a line
line::line()
{
	//line formed
	line1.set_x(-1.0);
	line2.set_x(1.0);
	line1.set_y(0.0);
	line2.set_y(1.0);
}


//pre-condition: private points p1 and p2
//post-condition: p1 and p2 are passing through 0,0 and a user provided point
line::line(point userPoint)
{
	line1.set_x(0.0);
	line1.set_y(0.0);
	line2 = userPoint;
}


//pre-condition: private points p1 and p2
//post-condition: p1 and p2's x and y values are initialized to be passing through two user-provided objects
line::line(point userPoint1, point userPoint2)
{
	line1 = userPoint1;
	line2 = userPoint2;
}


//pre-condition: private points p1 and p2
//post-condition: p1 and p2 are copied
line::line(const line newPoint1, const line newPoint2)
{
/*	p1 = copy.p1;
	p2 = copy.p2;*/
	line1 = newPoint1;
	line2 = newPoint2;
}

//pre-condition: private points p1 and p2
//post-condition: the slope of the line given by points x1, x2, y1, y2
double line::slope();
{
    if (line1.get_x == line2.get_x){
        double slope = 1/0;
    }
    else
	double slope = (line2.get_y() - line1.get_y())/(line2.get_x() - line1.get_x());
	return slope;
}

//pre-condition: user-inputted vales that represent the values that p1 and p2 will be added to
//post-condition: p1 and p2 are will pass through the values given by the user
void line::translate(double X, double Y)
{
	line1.translate(X,Y);
	line2.translate(X,Y);
}


//pre-condition: private points p1 and p2
//post-condition: p1 and p2's x values will become negative
void line::reflect_x()
{
	line2.reflect_x();
	line1.reflect_x();
}


//pre-condition: private points p1 and p2
//post-condition: p1 and p2's y values will become negative
void line::reflect_Y()
{
	line1.reflect_y();
	line2.reflect_y();
}

double yintercept(double slope)
{
    double yintercept = -(slope) * (line1.get_x + line2.get_x);
    return yintercept;
}
/*
void point::operator = (const line& lineToCopy)
{
	p1 = lineToCopy.p1;
	p2 = lineToCopy.p1;
	p1 = lineToCopy.p2;
	p2 = lineToCopy.p2;

}*/
//pre-condition: a constant address that will be copied from the line
//post-condition: p1 and p2 are copied onto the line
void line::operator = (const line &line1, const line &line2){

    //x = a
    line1.get_x() = line2.get_x();
    /*{
        cout << "Y="<<p1.get_y() << "\n";
        return 0;
    }*/
    //y = b
    line1.get_y() = line2.get_y();
    /*{
        cout << "X="<<p1.get_x() << "\n";
        return 0;
    }*/

}
bool operator ==(const line &line1, const line &line2, double slope, double yintercept)
{
	return (line1.slope() == line2.slope() && line1.yintercept() == line2.yintercept())
}


istream& operator >>(istream& ins, line& target)
{

	ins >> target.x >> target.y;
	return ins;
}

ostream& operator <<(ostream& outs, const line& source)
{
	outs << source.x << source.y;
	//outs << slope << "* x +" << yintercept;
	return outs;
}
