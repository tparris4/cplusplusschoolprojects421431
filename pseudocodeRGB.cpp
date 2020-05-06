//load the picture into code

//this is done by loadimage function that was provided
//loadimage uses multiple functions to set image and store RGB values
//into their own variables
//these values are stored into 2D array and will be used for the for loop function

//loadimage will take in photos starting with the first given and will go until
//final photo
//this is done through loading image in the BGI function and
//reading the pixel values

//sort function will be used to compare multiple photos
//sort method recommended is bubble sort
//function will compare RGB values with each other
//and will calculate the median pixel value
//median pixel value is stored in and integer
//if RGB value equals median pixel value
//RGB value is stored into array

//triple nested loop function
//for int i equal to 0; i is less than final photo; i incremented
//for int j equal to 0; j is less than final column; j incremented
//for int k equal to 0; k is less than final row; k incremented 
//current pixel compares RGB value to the next pixel's RGB value
//goes to next pixel in row
//goes to next pixel in column
//goes to next photo and repeat process
//pixels are stored into array for comparison

//pictures that lack or have addition RGB values from the majority of the other photos
//will not be included when taking RGB values for the the final photo
//if RGB value does not equal median pixel value
//continue loop
//an integer will take the median value that was present in the majority of photos
//and exclude those that did not pass

//finally, will take all RGB values that were considered the majority and will 
//use them for the final photo
//RGBmajority will be set to RGB values that were common throughout majority of photos
//putpixel will output to final photo

//print the final photo
