#ifndef BAGOFSQUARES_H 
#define BAGOFSQUARES_H
#include <iostream>
#include "Square.h"

//IMPORTANT:REMEMBER TO COPY YOUR FINISHED SQUARE.h and SQUARE.CPP From last section into the same directory

//class that represents a Bag of Squares. Uses a pointer to a dynamic array filled with squares
class BagOfSquares 
{
public:

	//As go through this use your square member functions to make life easier when appropriate
	//NOTE YOU MUST OVERLOAD COUT FOR ANY HYPERGRADE STUFF TO WORK (the test file highly depends on cout so do that early in your implementation)


	//constructors-- Just one that takes in a single square and an initial bag size
	//it should make theBag point to a dynamic array of squares
	//remember to set Used to an initial value and Capacity based on the size
	BagOfSquares(Square toStart=Square(), int size=1); //constructor with default params

	//destructor: implement to stop memory leaks, will be graded manually
	~BagOfSquares();

	//insert adds a square to the bag Remember to call resize when you need a bigger bag
	void insert(Square toAdd);

	//operator equals: by the end the bags should have the same squares (in the same order for hypergrade to work, they don't have to have the same capacity)
	//Remember to avoid memory leaks and pointers pointing to the same memory
	//make sure used is updated
	void operator= (const BagOfSquares& passedIn );

	//should print out all the squares as follows (lets say bag has a square of side 5 and 6: 
	//[Square with s:5 p:20 a:25][Square with s:6 p:24 a:36]...etc 
	//HINT-- think looping with  square cout that you implemented
	friend std::ostream& operator <<(std::ostream& outs, const BagOfSquares& source);


private:
	//Private function that resizes bag. SHould be called from addSquare
	//hint, you'll need to create a Square temp pointer 
	//remember to delete the old memory or else you will have a leak (this will be graded manually
	//and if implemented incorrectly you sill lose points!)
	void resizeBag(int newCapacity);
	int used; //how many are actually used
	int capacity; //how many total slots there are in the bag
	Square* theBag; //should point to a dynamic array of squares
};


#endif
