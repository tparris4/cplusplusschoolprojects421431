#include <iostream>
#include "lineofpixels.h"

using namespace std;

lineofPixels::lineofpixels (pixel toStart)
{
	thePixels = new Pixel [30];
	thePixels[0] = toStart;
}

lineOfPixels::lineOfPixels(const lineOfPixels& toCopy)
{
	lineOfPixels = toCopy.lineOfPixels;
 } 
