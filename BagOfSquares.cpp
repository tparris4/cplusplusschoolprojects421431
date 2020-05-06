#include <iostream>
#include "BagOfSquares.h"

using namespace std;
	//As go through this use your square member functions to make life easier when appropriate
	//NOTE YOU MUST OVERLOAD COUT FOR ANY HYPERGRADE 
	//STUFF TO WORK (the test file highly depends on cout so do that early in your implementation)


	//constructors-- Just one that takes in a single square and an initial bag size
	//it should make theBag point to a dynamic array of squares
	//remember to set Used to an initial value and Capacity based on the size
BagOfSquares::BagOfSquares(Square toStart, int size)
{
//	int used = 0;
	capacity = size;
	theBag = new Square[size];
	theBag[0] = toStart;
	used = 1;
}
//should print out all the squares as follows (lets say bag has a square of side 5 and 6: 
	//[Square with s:5 p:20 a:25][Square with s:6 p:24 a:36]...etc 
	//HINT-- think looping with  square cout that you implemented
std::ostream& operator <<(std::ostream& outs, const BagOfSquares& source)
{
		for (int i = 0; i < source.used; i++)
		{
			outs << "[" << source.theBag[i] << "]";
		}
		return outs;
}

//destructor: implement to stop memory leaks, will be graded manually
BagOfSquares::~BagOfSquares()
{
	delete[] theBag;
}

void BagOfSquares::insert(Square toAdd)
{
	if (used > capacity)
	{
		resizeBag(capacity);
	}
	if (used < capacity)
		{
			theBag[used] = toAdd;
			used++;
		}
	
	//calls resize
}
//operator equals: by the end the bags should have the same squares (in the same 
//order for hypergrade to work, they don't have to have the same capacity)
	//Remember to avoid memory leaks and pointers pointing to the same memory
	//make sure used is updated
void BagOfSquares::operator =(const BagOfSquares& passedIn )
{
	for (int i = 0; i < passedIn.used; i++)
	{
		insert(theBag[i]);
	}
}

//Private function that resizes bag. SHould be called from insert
	//hint, you'll need to create a Square temp pointer 
	//remember to delete the old memory or else you will have a leak (this will be graded manually
	//and if implemented incorrectly you sill lose points!)
void BagOfSquares::resizeBag(int newCapacity)
{
	Square *temp = new Square[newCapacity]; //new memory
	
	
	for(int i = 0; i < used; i++)
	{
		temp[i] = theBag[i];
	}
	
	delete[] temp;
	theBag = temp;
	capacity = newCapacity;
}

