#include <iostream>
#include "Square.h"

using namespace std;

//IMPLEMENT ALL THE .H FILE FUNCTIONS
//READ THE .H FILE BEFORE IMPLEMENTING

#include <iostream>
#include "Square.h"

using namespace std;

	//Double constructor with default parameters. Note, If negative values are passed in you must add 
	//a branching statement to make sure the side is equal to 1
Square::Square(double initSide)//constructor with default params
{
	if (initSide < 0.0)
	{
		side = 1.0;
	}
	else
	side = initSide;
}
//Copy Constructor: takes in a square and makes an identical square (i.e. square with same side length)
Square::Square(const Square& squareToCopy)
{
	side = squareToCopy.side;	
}

double Square::getSide() const
{
	return side;
}

//returns the area of the square which is the side multiplied by itself
double Square::getArea() const
{
	return (side * side);
}
//returns the perimenter of the square which is the side multiplied by 4
double Square::getPerimeter() const
{
	return (side * 4);
}
//if Square A has side 10 and Square B has side 5 after A+=B, A's side will now be 15 
void Square::operator +=(const Square& toAdd)
{
	side += toAdd.side;
}
//overloads operator equals for the square making them identical (i.e. same side length)
void Square::operator =(const Square& toSet)
{
	side = toSet.side;
}

//If the square has a side of 36.2 which implies a perimeter of 144.8 and area of 1310.44
//this will output in the following format "Square with s: 36.2 p:144.8 a:1310.44"
//Remember the friend modifier is NOT used in the .cpp implementation file!
std::ostream& operator <<(std::ostream& outs, const Square& source)
{
	outs << "Square with s:" << source.side << " p:" << source.getPerimeter() << " a:" << source.getArea();
}


bool operator ==(const Square& one, const Square& two)
{
	if (one.getSide() == two.getSide()){
	
		return true;
	}
	else
		return false; 
}


