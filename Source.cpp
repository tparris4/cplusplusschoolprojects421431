

//Max Ortiz
//create function called bubble sort taking parameter apvector <int> &num
//create function called median taking parameter  int &num
//create variable pixelValue and store value of pixel
//create 9 variable arrays of 3, picture1,picture2,picture3,picture4,picture5,picture6,picture7,picture8,picture9
//create 3 variables, red, green, blue and indiviudally store rgb value of pixel in each
//create loop to iterate through the 9 pictures
//first loop to get pixels from first picture
//for int i = 0, i less than 10 increment i by 1
//if i = 0 get pixel from picture 1 and store rgb value in picture1
//else if i = 1 get pixel from picture 2 and store rgb value in picture2
//else if i = 2 get pixel from picture 3 and store rgb value in picture3
//else if i = 3 get pixel from picture 4 and store rgb value in picture4
//else if i = 4 get pixel from picture 5 and store rgb value in picture5
//else if i = 5 get pixel from picture 6 and store rgb value in picture6
//else if i = 6 get pixel from picture 7 and store rgb value in picture7
//else if i = 7 get pixel from picture 8 and store rgb value in picture8
//else if i = 8 get pixel from picture 9 and store rgb value in picture9
//end for loop 
//call the function bubble sort and enter the picture number in the parameter
//the bubble sort will sort the rgb values
//create a int variable temp,i,j,flag equals 1
//create variable int numLength equals 3
//for i equals 1 (i less than equal to numLength) and flag then increment i by 1
// flag equals to 0
//for j equals to 0, j less than (numLength subtract 1) then increment j by 1
//if num[j plus one ] greater than num [j]
// temp equals num[j], num[j] equals num [j+1], num{j+1] equals temp, flag equals 1
//end if, end for ,end for, return and end BubbleSort
//after value is return
//display (picture number[size of array divided by 2] plus picture number[size of array /2] subtract 1 )
// all divided by 2 to attain the median
//in the main function display the final window of each picture number

#include "graphics.h" 
#include <stdio.h>
using namespace std;

void loadImage(int imageNumber);

int main()
{

	//I used the first window as a place to load the images and get their pixel values
	//and the final window as a place to write my final picture
	int firstWindow = initwindow(200, 225, "picture 1"); //notice these window values are ints
	int finalWindow = initwindow(200, 225, "finalPicture"); //i.e. initwindow returns an int

	int width[2] = { 0,0 };
	int height[255];

	//Here is sample code that loads image 1 and grabs the 
	//Red Green and Blue Values at pixel 5,23   (so 5 to the right and 23 down wherever that is)

	setcurrentwindow(firstWindow); //BGI function that allows you to select the active window
								   //since I'm going to load an image to read I make the active window 'firstWindow'

	loadImage(0); //Now our firstWindow should have image(0) displayed

	int pixelValue = getpixel(5, 23); // getPixel is a BGI function that returns an integer
									  // That isn't easily understandable (it's hard to figure out what that int means)--> however
									  //there are three other BGI functions that take in this pixel integer
									  //value and returns the Red, Green,and Blue values (also integers from 0 to 255)

	int redValueOfPixel = RED_VALUE(pixelValue);
	int greenValueOfPixel = GREEN_VALUE(pixelValue);
	int blueValueOfPixel = BLUE_VALUE(pixelValue);

	//Finally, let's say we wanted to write this pixel value out to the final window
	//-- for example if we did all our calculationas and it turns out for pixel 5,23 
	//picture 1 has our median pixel value. we do it as follows
	setcurrentwindow(finalWindow); //we set it to our final window 
	putpixel(5, 23, COLOR(redValueOfPixel, greenValueOfPixel, blueValueOfPixel)); //COLOR takes in RGB values
																				  //and returns an integer that represents those values
	setcurrentwindow(firstWindow);
	for (int i = 0; i <= 255; i++)
	{
		for (int j = 0; j <= 255; j++)
		{
			pixelValue = getpixel(i, j);
			putpixel(i, i, COLOR(redValueOfPixel, greenValueOfPixel, blueValueOfPixel));
			width[2] = { pixelValue };
		}
	}
	outtextxy(0, 0, "Press any key");
	getch(); //pauses the program

}


//all the images are numbered 0 to 8
//this function takes that image number and loads it onto the 
//selected window (I loaded images onto the first window)
void loadImage(int imageNumber)
{
	char str[6];
	sprintf(str, "%i.jpg", imageNumber);
	readimagefile(str, 0, 0, 200, 225); //this is a BGI function that loads the image onto the current window
}