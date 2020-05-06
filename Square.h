#ifndef SQUARE_H 
#define SQUARE_H
#include <iostream>
//THE FOLLOWING CLASS REPRESENTS A SQUARE AS A SINGLE DOUBLE VARIABLE REPRESENTING THE SIDE OF THE SQUARE
//READ THE COMMENTS BEFORE IMPLEMENTING
class Square //class that represents a single Square
{
public:
	//Double constructor with default parameters. Note, If negative values are passed in you must add 
	//a branching statement to make sure the side is equal to 1
	Square(double initSide=1); //constructor with default params
	
	//Copy Constructor: takes in a square and makes an identical square (i.e. square with same side length)
	Square(const Square& squareToCopy); //copy constructor
	double getSide() const;
	
	//returns the area of the square which is the side multiplied by itself
	double getArea() const;
	
	//returns the perimenter of the square which is the side multiplied by 4
	double getPerimeter() const;
	
	//if Square A has side 10 and Square B has side 5 after A+=B, A's side will now be 15 
	void operator +=(const Square& toAdd);

	//overloads operator equals for the square making them identical (i.e. same side length)
	void operator =(const Square& toSet);

	//If the square has a side of 36.2 which implies a perimeter of 144.8 and area of 1310.44
	//this will output in the following format "Square with s: 36.2 p:144.8 a:1310.44"
	//Remember the friend modifier is NOT used in the .cpp implementation file!
	friend std::ostream& operator <<(std::ostream& outs, const Square& source);

	

private:
	double side;
};

bool operator ==(const Square& one, const Square& two);

#endif
