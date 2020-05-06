#include <iostream>
#include "pixel.h"
#include "lineOfPixels.h"

using namespace std;
int main()
{
	cout << "creating a line of pixels,r, with a single black pixel in it" << endl;
	pixel z;
	lineOfPixels r(z);

	cout << " r should have one pixel in it"<<endl<<endl;
	cout <<r<<endl;

	cout << "now testing the add function" << endl;
	for (int i = 1; i < 30; i++)
	{
		pixel hey(i + 10, i + 20, i + 30);
		r.addPixel(hey);
	}

	cout << "r should now have 30 pixels in it and the last one should be 39,49,59" << endl<<endl;
	cout << r<<endl<<endl;
	cout << "now trying to create line of pixels q as a copy of r"<<endl<<endl;
	lineOfPixels q(r);
	cout << "now printing out q, should be same as r" << endl<<endl;
	cout << q<<endl;

	cout << "Remember, I will check the destructor implementation manually" << endl;

	int w;
	cin >> w;

	/*int red, green, blue;
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
	
	cin >> red;*/
}
