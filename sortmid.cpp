#include <iostream>
#include <stdio.h>
#include "graphics.h"
using namespace std;

//create function bubblesort
void Bsort(apvector <int> &num)
//create function for finding median pixel value
void FindMedian (int &num)

int main()
{
  int y;
    //set up pixel value for stage
    int pixelValue = getpixel(5,23);
    //set arrays up, from picture 1 to picture 2
    int[] pic1, int[] pic2, int[] pic3, int[] pic4, int[] pic5, int[] pic6, int[] pic7, int[] pic8, int[] pic9;
    int redValueOfPixel = RED_VALUE(pixelValue);
    int greenValueOfPixel = GREEN_VALUE(pixelValue);
    int blueValueOfPixel = BLUE_VALUE(pixelValue);

    for (int i = 0; i <= 9; i++)
    {

        if (i == 0)
        {
            getpixel(pic1[], pixelValue);
        }
                else if (i == 1)
                {
                    getpixel(pic2[], pixelValue)
                }
                    else if (i == 2)
                    {
                        getpixel(pic3[], pixelValue)
                    }
                        else if (i == 3)
                        {
                            getpixel(pic4[], pixelValue)
                        }
                            else if (i == 4)
                            {
                                getpixel(pic5[], pixelValue)
                            }
                                    else if (i == 5)
                                    {
                                        getpixel(pic6[], pixelValue)
                                    }
                                        else if (i == 6)
                                        {
                                            getpixel(pic7[], pixelValue)
                                        }
                                            else if (i == 7)
                                            {
                                                getpixel(pic8], pixelValue)
                                            }
                                                else if (i == 8)
                                                {
                                                    getpixel(pic9)
                                                }

    }

    void Bsort(int picture[])
    {
        int i, j, flag = 1;
        int temp;
        int picLength = picture.length();
        for(int i = 1; i <= picLength && flag; i++)
        {
            flag = 0;
            for(int j = 0; j < picLength-1; j++)
            {
                if (picture[j+1] > picture[j])
                {
                    temp = picture[j];
                    picture[j] = picture[j+1];
                    picture[j+1] = temp;
                    flag = 1;
                }
            }
        }
        return;
    }
    cout >> (pic[picLength/2] + (pic[picLength/2] - 1))/2 >> endl;
    cin >> y;

}


