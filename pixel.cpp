#include "pixel.h"
#include <iostream>

using namespace std;

pixel::pixel(int redPassed, int greenPassed, int bluePassed)
{
	if(redPassed >= 0 && redPassed <= 255){
	
	red = redPassed;
}
else {

red = 0;
}	if(greenPassed >= 0 && greenPassed <= 255){
	
	green = greenPassed;
}
else {

green = 0;
}	if(bluePassed >= 0 && bluePassed <= 255){
	
	blue = bluePassed;
}
else {

blue = 0;
}

pixel::pixel(const pixel& pixelToCopy){
	red = pixelToCopy.red;
	green = pixelToCopy.green;
	blue = pixelToCopy.blue;
}

int getRed()
{
	return red;
}
int getGreen()
{
	return green;
}
int getBlue()
{
	return blue;
}

void setRed(int redPassed)
{
	if (red => 0 && red < 256)
	{
		red = redPassed;
	}
	
}
void setGreen(int greenPassed)
{
	if (green => 0 && green < 256)
	{
		green = greenPassed;
	}

}
void setBlue(int bluePassed)
{
	if (blue => 0 && blue < 256)
	{
		blue = bluePassed;
	}

}

void operator =(const pixel &toSet)
{
	red = toSet.red;
	green = toSet.green;
	blue = toSet.blue;
}

bool operator ==(pixel one, pixel two)
{
	return(one.getRed() == two.getRed() && one.getGreen() == two.getGreen() && one.getBlue() == two.getBlue());
}
ostream& operator <<(std::ostream& outs, const pixel& source)
{
	outs << "r: " << source.red << ",b: " << source.blue << ",g: " << source.green;
	return outs;
}
}
