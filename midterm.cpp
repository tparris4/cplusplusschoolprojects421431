#include <iostream>
#include <stdio.h>
#include "graphics.h"
using namespace std;

void Bsort(int picture[]);
//create function bubblesort
void loadImage(int imageNumber);
//create function to load image

int main()
{
  int y;

    int pixelValue = [9][200][255];
    //set up pixel value
    //pixel value will take the dimensions of the getpixel function
	//returns the red blue and green values

    int firstWindow = initwindow(200, 225, "picture 1");
	//create a window that will store pixels with 200xwidth, 225xlength, and picture
	int finalWindow = initwindow(200, 225, "finalPicture");
	//create a window that will store pixels with 200xwidth, 225xlength and final picture

	int Red;
	int Green;
	int Blue;
	int pixelred[];
	int pixelgreen[];
	int pixelblue[];
    for (int i = 0; i < 9; i++)
    //for loop will go through each picture, once it hits a value, it goes into the pixel, gets the pixel values and stores it
    //in pixelvalue. the loop continues until the 9th picture 
    {
    setcurrentwindow(firstWindow);
	//this function will take the image into the current window in order to process pixels
	loadimage(i);
	//put current image in window
		for (int row = 0; row < 200; row++)
		{
			for (int column = 0; column < 255; col++)
			{
				pixelValue[i][row][column] = getpixel(row, column);
			}
		}
    }

	setcurrentwindow(finalWindow);
	//the currentwindow will get the next picture, stored as finalwindow
	
	for (int i = 0; i < 9; i++)
	{
		for (int row = 0; row < 200; row++)
		{
			for (int column = 0; column < 255; col++)
			{
								
				    int redValueOfPixel = RED_VALUE(pixelValue[i][row][column]);
  					//red pixel will take red values
   					 int greenValueOfPixel = GREEN_VALUE(pixelValue[i][row][column]);
   					//green pixel will take green values
   					 int blueValueOfPixel = BLUE_VALUE(pixelValue[i][row][column]);
   					  //blue pixes will take blue values
				
				
					pixelred[i] = redValueOfPixel;
					//red pixel value is stored
					pixelgreen[i] = greenValueOfPixel;
					//green pixel value is stored
					pixelblue[i] = blueValueOfPixel;
					//blue pixel value is stored
							
			}
					RedCompare = Bsort(pixelred);
					//sent to sort function for median value
					BlueCompare = Bsort(pixelblue);
					//sent to sort function for median value
					GreenCompare = Bsort(pixelgreen);
					//sent to sort function for median value
					
					putpixel(row, column, COLOR(RedCompare, GreenCompare, BlueCompare));
			//a put function will take in values and store them into the following variable
			//in this case, putpixel will take in getpixels values and store them into red, blue and green values
			//this will be the median value
		}
	}

	outtextxy(0, 0, "Press any key");
	//this will put the program on hold
	getch();
	//looks for user input

 void Bsort(int picture[])
      //bubble sort will sort and return the median pixel value
    {
    	int flag = 1;
        int temp;
        for(int i = 1; i <= 10 && flag; i++)
        //start with the column of the picture
        {
            flag = 0;
            for(int j = 0; j <= 10; j++)
            //next loop will go through the row and analyze each pixel
            {
                if (picture[i] > picture[j])
                {
                    temp = picture[j];
                    picture[j] = picture[i];
                    picture[i] = temp;
                    flag = 1;
                }
            }
        }
        return picture[4];
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

}






