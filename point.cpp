#include <iostream> //we are adding ostream and istream
#include <cstdlib>
#include "point.h"
#include "math.h"
#define PI 3.1415926535897932384626
using namespace std;

//default constructor
//pre-condition: takes in private points x & y
//post-condition: sets them to 0
point::point(){
	x = 0.0;
	y = 0.0;

}

//pre-condition: takes in private point x
//post-condition: returns the value of point x
double point::get_x(){
	return x;
}

//pre-condition: takes in private point y
//post-condition: returns the value of point y
double point::get_y(){
	return y;
}

//pre-condition: takes in private point x
//post-condition: sets x to a user given input
void point::set_x(double incx){
	x = incx;

}


//pre-condition: takes in private point y
//post-condition: sets y to a user given input
void point::set_y(double incy){
	y = incy;

}

//pre-condition: points x and y
//post-condition: adds userinputs to point x and y respectively
void point::translate(double xadd, double yadd)
{
	x = x + xadd;
	y = y + yadd;
}

//copy constructor
//pre-condition: points x and y
//post-condition: makes a copy of point x and y
point::point(const point &copy)
{
	x = copy.x;
	y = copy.y;
}


//pre-condition: positive number given by user input
//post-condition: x and y multiplied by the number given
void point::scale(double m)
{
	int number;
	cin >> number;
	cout << "Enter a positive number to be multiplied" << "\n";
	while (number < 0)
	{
	cout << "Number is not positive, try again"
	cint >> number;
	else
		x = x * number;
		y = y * number;
	}
}

//pre-condition: point y
//post-condition: sets point y to a negative integer
void point::reflect_x(){
	y = y - (2 * y)
}


//pre-condition: point x
//post-condition: sets point x to a negative integer
void point::reflect_y(){
	x = x - (2 * x)
}

//pre-condition: user inputted integer that is multiplied by PI radians
//post-condition: point x and y are set to the value PI radian
void point::rotate(double r)
{
	double tempx;
	double tempy;
	tempx = x * cos r - y * sin r;
	tempy = x * sin r + y * cos r;
	x = tempx;
	y = tempy;
}


//pre-condition: point x and y
//post-condition: sets y to a copy of x
void point::operator = (const point& pointToCopy)
{
	y = pointToCopy.y;
	x = pointToCopy.x;

}


//pre-condition: x and y are the same value
//post-condition: checks if point x and y are the same value
bool operator ==(const point &x, const point &y)
{
	if (x.get_x() == y.get_y())
	{
	return true;

}
	else
		return false;

}

//pre-condition: an value inputted by the user
//post-condition: inputted is overloaded
istream& operator >>(istream& ins, point& target)
{


	ins >> target.x >> target.y;
	return ins;
}

//pre-condition: a check that the value can be outputted to user
//post-condition: outputs the value of x and y
ostream& operator <<(ostream& outs, const point& source)
{
	outs << source.get_x() << source.get_y();
	return outs;
}
