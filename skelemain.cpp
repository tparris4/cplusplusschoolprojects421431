//This is some skeleton code for the PeskyTourist assignment.
//It shows you how to load images and get RGB pixel values and write RGB pixel values
//and gives you a function that laods an image for you
//It comes with suggestions on what I did, you do not need to follow these
//The pictures are 200 by 225 (so 200 width, 225 height)
//When you run this program you should see two windows-- one with a whole image and
//one with  a single pixel. Play around with these functions and get comforatable with them
//as you figure out the assignment.

//You can find the BGI documentation at https://www.cs.colorado.edu/~main/bgi/doc/

#include "graphics.h"
#include <stdio.h>
using namespace std;

void loadImage(int imageNumber);
//function will load image for processing
int main()
{

	int firstWindow = initwindow(200, 225, "picture 1");
	//create a window that will store pixels with 200xwidth, 225xlength, and picture
	int finalWindow = initwindow(200, 225, "finalPicture");
	//create a window that will store pixels with 200xwidth, 225xlength and final picture


	setcurrentwindow(firstWindow);
	//this function will take the image into the current window in order to process pixels

	loadImage(0);
    //the current window will load image(0), or the current image available
	int pixelValue = getpixel(5, 23);
	//pixel value will take the dimensions of the getpixel function
	//returns the red blue and green values

	int redValueOfPixel = RED_VALUE(pixelValue);
	//store red pixel as the current pixelvalue
	int greenValueOfPixel = GREEN_VALUE(pixelValue);
	//store green pixel as the current pixelvalue
	int blueValueOfPixel = BLUE_VALUE(pixelValue);
	//store blue pixel as the current pixelvalue

	setcurrentwindow(finalWindow);
	//the currentwindow will get the next picture, stored as finalwindow
	putpixel(5, 23, COLOR(redValueOfPixel, greenValueOfPixel, blueValueOfPixel));
	//a put function will take in values and store them into the following variable
	//in this case, putpixel will take in getpixels values and store them into red, blue and green values
	//this will be the median value
	setcurrentwindow(firstWindow);
	for (int i = 0; i < 266; i++)
    {
        for (int j = 0; j < 266; j++)
        {
            pixelValue = getpixel(i, j);
            putpixel(i, j, COLOR(redValueOfPixel, greenValueOfPixel, blueValueOfPixel));
            width[2] = {pixelValue};
        }
    }
	//the firstwindow will be set in order for processing
	outtextxy(0, 0, "Press any key");
	//this will put the program on hold
	getch();
	//looks for user input

}


void loadImage(int imageNumber)
//function loadImage will take the current image and load it into the current window
{
	char str[6];
	//sets an array with 7 elements (0-6)
	sprintf(str, "%i.jpg", imageNumber);
	//prints out the array and the image numbers
	readimagefile(str, 0, 0, 200, 225);
    //reads the image file and loads it into the current window
}
