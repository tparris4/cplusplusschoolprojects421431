#include <iostream>  //provides cout and cin
#include <cstdlib> //provides the all important EXIT_SUCCESS
#include "point.h"   //provides our mug class

#define PI 3.1415926535897932384626

using namespace std;
int main()
{
	point x, y;
	point z;
	point();
	cout << "The x-axis is at " << z.get_x() << "\n";
	cout << "The y-axis is at " << z.get_y() << " \n";
	cout << "Enter the x-axis and y-axis" << "\n";
	cin >> x >> y;
	x.set_x();
	y.set_y();
	cout << "The x-axis is at " << z.get_x() << "\n";
	cout << "The y-axis is at " << z.get_y() << "\n";

	cout << "Enter the point to be moved" << "\n";
	cin >> x >> y;

	z.translate(x,y);

	cout << "The x-axis is at " << z.get_x() << "\n";
	cout << "The y-axis is at" << z.get_y() << "\n";

	Point x = copy;
	Point y = copy;

	double m;
	cin >> m;
	z.scale(m);

	z.reflect_x();
	z.reflect_y();

	double r;
	cin >> r;
	r = r * PI;
	z.rotate(r);


	int fin;
	cin >> fin;
	}
