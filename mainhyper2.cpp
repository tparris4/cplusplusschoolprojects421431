#include <iostream>
#include "pixel.h"

using namespace std;
int main()
{
	int red, green, blue;
	cout << "Input red green and blue values separated by a space ";
	cin >> red >> green >> blue;

	pixel x(red, green, blue);
	pixel y;

	cout << "Checking double constructor with default values "<<endl;
	cout << "With cin values " << x<<endl;
	cout << "With default values " << y << endl;
	cout << "Checking copy constructor " << endl;
	pixel z(x);
	cout << "z should be copy of x " << z << endl;

	cout << "Checking if operator equals equals works ";
	if (z == x)
	{
		cout << "z equals x ";
	}
	if (z == y)
	{
		cout << "z equals y ";
	}
	else
	{
		cout << "z does not equal y "<<endl;
		cout << "setting z to y to check the equals operator " << endl;
		z = y;
		if (z == y)
		{
			cout << "z now equals y " << endl;
		}
	}
	cout << "finally checking if set works by setting z to white " << endl;
	z.setRed(255); z.setBlue(255); z.setGreen(255);
	cout << z<<endl;
	cout << "Now setting z to bad values, should still be white" << endl;
	z.setRed(299); z.setBlue(299); z.setGreen(299);
	cout << z << endl;
	//just to pause the program
	
	cin >> red;
}
