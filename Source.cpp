//The mug class Demo
//Program that tests how the mug class works

#include <iostream>  //provides cout and cin
#include <cstdlib> //provides the all important EXIT_SUCCESS
#include "mug.h"   //provides our mug class

using namespace std; //allows standard library items to be used
//DO NOT CHANGE THIS FILE-- ONLY CHANGE mug.cpp!!
int main()
{
	int mug2Fill;
	cout << "what do you want to fill your mug to initially: ";
	cin >> mug2Fill;
	mug firstMug(mug2Fill);
	cout << "first mug is filled to: " << firstMug.getFillAmount()<<endl;
	cout << "Now test adding or subtracting some fluid to the mug " << endl;
	cin >> mug2Fill;
	firstMug.fillMug(mug2Fill);
	cout << "first mug is filled to: " << firstMug.getFillAmount() << endl;
	cout << "Now we'll empty the mug" << endl;
	firstMug.empty();
	if (firstMug.isEmpty())
	{
		cout << "mug Is Now empty" << endl;
	}
	cin >> mug2Fill;
	return EXIT_SUCCESS;
}
