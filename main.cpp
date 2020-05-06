//The mug class Demo
//Program that tests how the mug class works

#include <iostream>  //provides cout and cin
#include <cstdlib> //provides the all important EXIT_SUCCESS
#include "mug.h"   //provides our mug class

//initializing static int howManyMugs

using namespace std; //allows standard library items to be used

int main()
{
	cout << "Making first mug with no parameter" << endl;
	mug firstMug; //Constructor called Uses default value, should be empty
	cout << "number of mugs: " << mug::howManyMugs << endl; //should be 1
	
	cout << "Making second mug with fill of 32.0" << endl;
	mug secondMug(32.0); //Constructor called, uses passed in value

	cout << "number of mugs: " << mug::howManyMugs << endl; //should be 2
	cout << "Insert a value for firstMug and secondMug seperated by a space \n";
	cin >> firstMug >> secondMug;
	cout << "This is the value I output for firstMug " << firstMug<<endl;

	cout << "\n I have two mugs. My first mug is filled to: ";
	cout << firstMug.getFillAmount();
	cout << ". And my second mug is filled to: ";
	cout << secondMug.getFillAmount();
	cout << "\n";

	cout << "Now let's empty our second mug \n";
	secondMug.empty();

	if (secondMug.isEmpty())
	{
		cout << "the second mug is empty right now \n";
	}

	cout << "now let's fill up the second mug to 32.33 \n";
	secondMug.fillMug(32.33);

	cout << "Now the second mug is filled to: ";
	cout << secondMug.getFillAmount();
	cout << "\n";

	cout << "let's try to cout a whole mug \n";
	cout << "here's mug1's value " << firstMug << " and here's mug2 " << secondMug << endl;

	cout << "Now Let's set the two mugs equal \n";
	firstMug = secondMug;
	cout << "first mug1 is now: " << firstMug << " and mug2 is now " << secondMug << endl;

	cout << "now let's cin firstMug \n";
	cin >> firstMug;
	cout << "firstMugs value is: " << firstMug;
	cout << " now let's compare them with == and > \n";

	if (firstMug == secondMug)
	{
		cout << "First Mug Equals Second Mug \n";
	}
	else if (firstMug > secondMug)
	{
		cout << "First Mug is Greater than Second Mug \n";
	}
	else
	{
		cout << "First Mug Is Less Than Second Mug \n";
	}

	cout << "Now lets fill Mug 1 with some additional value-- input a value to fill Mug 1 to" << endl;
	int x;
	cin >> x;
	firstMug.fillMug(x);
	cout << "first mug is now: " << firstMug << endl;
	cin >> x;
	return 0;
}

