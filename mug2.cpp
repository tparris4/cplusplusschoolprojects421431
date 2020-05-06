#include "mug.h"
#include <iostream> //we are adding ostream and istream
#include <cstdlib>
using namespace std;
//these comments should help you, as the programmer of this out
//i.e. everyone else who gets handed this code
//should rely on the comments in the .h file
//Member Constants
int mug::howManyMugs = 0; //keeps track of how many mug instances are created. 


/**IMPLEMENT Constructor with an initial fill passed in
make sure initial fill is greater than 0 or less than CAPACITY
Add one to how many mugs*/
mug::mug(double initialFill) 
{

	 if (initialFill < 0.0)
    {
        cout << "Negative fill amount, setting amountFilled to 0" << "\n";
        initialFill = 0.0;
    }
    else if (initialFill > CAPACITY)
    	{
    	cout << "Too much fill amount, setting amountFilled to CAPACITY" << "\n";
    	initialFill = CAPACITY;
		}
    howManyMugs++;
}


/**IMPLEMENT** adds the fill amount to the mug (positive or negative) 
make sure it's not filling THE MUG to an amount greater 
than CAPACITY or less than 0*/
void mug::fillMug(double fillAmount) //**IMPLEMENT** adds the fill amount to the mug (positive or negative) 
									 //make sure it's not filling it to an amount greater
{									 //than CAPACITY or less than 0

    amountFilled = amountFilled + fillAmount;
    if (amountFilled < 0.0){
        cout << "Negative fill amount, setting amountFilled to 0" << "\n";
        amountFilled = 0.0;
    }
    else if (amountFilled > CAPACITY)
    	{
    	cout << "Too much fill amount, setting amountFilled to CAPACITY" << "\n";
    	amountFilled = CAPACITY;
		}
}
/*IS EMPTY IS IMPLEMENTED FOR YOU */
void mug::empty() 
{
	amountFilled = 0;
}

/*NOTE GET FILL AMOUNT IS NOW INLINED in the .h! Also you don't have implement it
BUT CHECK OUT THE INLINING SYNTAX*/

/*IS EMPTY IS IMPLEMENTED FOR YOU */
bool mug::isEmpty() const   //checks if the mug is empty and return 
{
	return (amountFilled == 0.0);
}

/**IMPLEMENT** assigns the amount in the calling mug object to the same amount
as the mugToCopy object. Note that this is a member denoted by mug::*/
void mug::operator = (const mug& mugToCopy) //IMPLEMENT THIS!
{
	amountFilled = mugToCopy.amountFilled;

}

/**IMPLEMENT** checks if the amount in the calling mug object is greater than
 the mugToCopy object. Note that this is a member denoted by mug::*/
bool mug::operator > (const mug& mugToCompare) const //IMPLEMENT THIS
{
	if (amountFilled > mugToCompare.getFillAmount())
	{
			return true;
	}
}

/**IMPLEMENT** checks if the amounts in two mugs are equal. NOTE THIS IS NOT A 
MEMBER and thus both mugs are passed in (there is no calling object)*/
bool operator ==(const mug &firstMug, const mug &secondMug) //IMPLEMENT THIS
{
	if (firstMug.getFillAmount() == secondMug.getFillAmount())
	{	
	return true;
	
}
	else 
		return false;

}


/*IMPLEMENT THIS: CIN (i.e. Operator >> is ALMOST implemented for you
BUT it doesn't quite work...think about it*/
/*Google overloading cin and cout in c++ if you are having trouble*/
istream& operator >>(istream& ins, mug& target)
{

	
	ins >> target.amountFilled;
	if (target.amountFilled < 0.0)
    {
        cout << "Negative fill amount, setting amountFilled to 0" << "\n";
        target.amountFilled = 0.0;
    }
    else if (target.amountFilled > 73)
    	{
    	cout << "Too much fill amount, setting amountFilled to CAPACITY" << "\n";
    	target.amountFilled = 73;
		}
	return ins;
}

/*IMPEMENT THIS--outputs the amount filled-- you can use operator >> as a guide
Remember outs is like cout so you can do the same things with it
and then return it. Note this is a non-member so the mug that needs
to be couted is explicitly passed in*/
/*Google overloading cin and cout in c++ if you are having trouble*/

ostream& operator <<(ostream& outs, const mug& source)
{
	outs << source.amountFilled;
	return outs;
}


