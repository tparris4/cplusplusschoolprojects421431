#include <iostream>
#include "BagOfSquares.h"

using namespace std;
//DO NOT MODIFY THIS FILE IN ANY WAY OR ELSE IT WILL BREAK HYPERGRADE!! You can try to comment it if you want to incrementally test.
//However IF YOU DO MODIFY THE FILE ACCIDENTALLY THAT CHANGES THE OUTPUT DOWNLOAD IT AGAIN
//IF YOU TURN IN A MODIFIED FILE YOU WILL LOSE POINTS

//NOTE: YOU HAVE TO OVERLOAD COUT CORRECTLY FOR ANY OF THESE TESTS TO WORK
int main()
{
	cout<<"\nREMEMBER TO IMPLEMENT THE DESTRUCTOR AND RESIZE correctly. IF anything is wrong Ill manually knock down the hypergrade\n";

	cout<<"\n** Now we'll test the constructor with default parameters and COUT (must be implemented!) \n";
	BagOfSquares A;
	cout<<"The Bag should have 1 square in it with side equal to 1, perimeter: 4 area: 1: "<<A<<endl;

	cout<<"\n** Now we'll test the bag constructor by passing in a square with side 3.2 and a initial size of 4 slots \n";
	Square t(3.2);
	BagOfSquares B(t,4);
	cout<<"This should output one bag with a side of 3.2 (p:12.8 and area: 10.24): "<<B<<endl;
	
	cout<<"\n** Now we will fill the rest of the second bag up with squares of sides of 4,5, and 6 \n";
	B.insert(Square(4));
	B.insert(Square(5));
	B.insert(Square(6));
	cout<<"This should output the contents of the second bag (squares with sides 3.2,4,5,6) "<<B<<endl;

	cout<<"\n**Now we'll test resize by adding another square, with side 32, to the second bag \n";
	B.insert(Square(32));
	cout<<"The second bag should now have sides of (3.2,4,5,6,32): "<<B<<endl;

	cout<<"\n**We will now test operator equals, this will happen in two stages"<<endl;
	cout<<"    The first stage involves setting bag 1 equal to bag 2 and printing them out"<<endl;
	A=B;
	cout<<"Here is Bag 1: "<<A<<endl;
	cout<<"Here is Bag 2: "<<B<<endl;
	cout<<"\n    The second stage involves creating a third bag using the default parameters, setting A equal to that bag and then printing out all three bags"<<endl;
	
	BagOfSquares C;
	A=C;
	cout<<"Here is Bag 1 (should just have 1 side equal to 1): "<<A<<endl;
	cout<<"Here is Bag 2 (should have sides 3.2,4,5,6,32 inside) "<<B<<endl;
	cout<<"Here is Bag 3 (should just have 1 side equal to 1): "<<C<<endl<<endl;

	cout<<"\nREMEMBER TO IMPLEMENT THE DESTRUCTOR AND RESIZE correctly. IF anything is wrong Ill manually knock down the hypergrade\n\n";



}
