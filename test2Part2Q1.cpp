#include <iostream>
#include "Square.h"

using namespace std;
//DO NOT MODIFY THIS FILE IN ANY WAY OR ELSE IT WILL BREAK HYPERGRADE!! You can try to comment it if you want to incrementally test.
//However IF YOU DO MODIFY THE FILE ACCIDENTALLY THAT CHANGES THE OUTPUT DOWNLOAD IT AGAIN
//IF YOU TURN IN A MODIFIED FILE YOU WILL LOSE POINTS
int main()
{
	int x=15;
	cin>>x;
	cout<<"\n ** Now Testing The Double Constructor and getSide() by making a square with side 13.3 ** \n";
	Square A(13.3);
	cout<<"The side of the square should be equal to 13.3: "<<A.getSide()<<endl;
	cout<<"\n ** Now Testing trying to create a square with a negative side (-5.3) using the Double Constructor ** \n";
	Square B(-5.3);
	cout<<"The side should instead be set to 1: "<<B.getSide()<<endl;
	cout<<"\n ** Now testing the copy constructor by Making a copy of the first square ** \n";
	Square C(A);
	cout<<"This square should also have a side of 13.3: "<<C.getSide()<<endl;
	cout<<"\n ** Now Testing getArea of the first square ** \n";
	cout<<"The area should be 176.89: "<<A.getArea()<<endl;
	cout<<"\n ** Now Testing getPerimeter of the first Square ** \n";
	cout<<"The perimeter should be 53.2: "<<A.getPerimeter()<<endl;
	cout<<"\n ** Now checking overloaded += by += the second square with the first square** \n";
	B+=A;
	cout<<"The second square should now have a side of 14.3: "<<B.getSide()<<endl;
	cout<<"\n ** Now checking overloaded cout by coutting the third square ** \n" ;
	cout<<"This square should output: Square with s:13.3 p:53.2 a:176.89): "<<C<<endl;
	cout<<"\n ** Now checking overloaded = by setting the first Square equal to the second Square ** \n";
	A=B;
	cout<<"The second square should now have a side of 14.3: "<<B.getSide()<<endl;
	cout<<"\n ** Now checking operator == by seeing if square 1 equals square 2 and if square 1 does not equal square 3 **\n";
	if(A==B)
	{
		cout<<"Correct, square 1 equals square 2"<<endl;
	}
	else
	{
		cout<<"Incorrect, square 1 is supposed to equal square 2 \n";
	}
	if(A==C)
	{
		cout<<"Incorrect, square 1 is not supposed to equal square 3 \n";
	}
	else
	{
		cout<<"Correct, square 1 does not equal square 3 \n";
	}
}
