#ifndef LINEOFPIXELS_H 
#define LINEOFPIXELS_H
#include <iostream>
#include "pixel.h"

class lineOfPixels //class that represents a single pixel
{
public:
	//ASSUME THAT THE LINE OF PIXELS ARE ONLY 30 PIXELS LONG FOR THIS TEST
	//AND NO RESIZING TAKES PLACE JUST TO MAKE LIFE EASIER
	//SO IT WILL ONLY EVER HOLD AT A MAX 30 PIXELS

	//constructors-- one takes in a pixel and one takes in another line of pixels
	//the private variable should point to a dynamic array of 30 pixels
	//Remember to update used in both constructors
	lineOfPixels(pixel toStart); //constructor with default params, you pass in 1 pixel
	lineOfPixels(const lineOfPixels& toCopy);

	//destructor: implement to stop memory leaks
	~lineOfPixels();
	//Remember to update used
	void addPixel(pixel toAdd);

	//should print out all the pixels as follows [r:233,b:22,g:32][r:44,b12,g:15] 
	//HINT-- use pixels cout that you implemented
	friend std::ostream& operator <<(std::ostream& outs, const lineOfPixels& source);


private:
	//remember you can assume the capacity is 30
	int used; //how many are actually used
	pixel* thePixels;
};


#endif
