#ifndef PIXEL_H 
#define PIXEL_H
#include <iostream>
//READ THE COMMENTS BEFORE IMPLEMENTING
class pixel //class that represents a single pixel
{
public:
	//constructors, if negative values are passed in it makes the value of that channel 0
	//also if values are over 255 it sets values to 0
	pixel(int redPassed = 0, int greenPassed = 0, int bluePassed=0); //constructor with default params
	pixel(const pixel& pixelToCopy); //copy constructor
	int getRed(); //gets red channel
	int getGreen(); //gets blue channel
	int getBlue(); //gets blue channel

	//Setters-- does not allow the pixel to be set to a negative value
	//or to a value over 255 (i.e. only sets if it's within those bounds)
	void setRed(int redPassed); //sets red channel
	void setGreen(int greenPassed); //sets green channel
	void setBlue(int bluePassed); //sets blue channel

	void operator =(const pixel &toSet);

	//outputs in the format r:232,b:333,g:55
	friend std::ostream& operator <<(std::ostream& outs, const pixel& source);

private:
	int red; //red amount
	int green; //green amount
	int blue; //blue amount
};

bool operator ==(pixel one, pixel two);

#endif
