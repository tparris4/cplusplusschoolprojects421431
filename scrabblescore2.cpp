#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int CalcScrabbleWordScore(char scrabble[], int total, int Length);
// pre condition: Takes in character array as parameter
//post condition: Returns an integer value representing the score of that given word

int main()
{
	int y;
	char scrabble[10];
	int total;
	cout << "enter a lowercase word less than 10 letters to find scrabble score of: \n";
	cin >> scrabble;
	int Length;
	for (int i = 0; i < 10; i++)
	{
		if (scrabble[i] == '\0')
		{
		Length = i-1;
		}
	}
	//finds length of array
	
	CalcScrabbleWordScore(scrabble, total, Length);
	//takes in word and runs it through function
	cout << "the score is: " << total << "\n";
	//outputs score
	cin >> y;

}

int CalcScrabbleWordScore(char scrabble[], int total, int Length)
{
	char letters[Length];
	int score[Length];
	//used to store numbers
	for (int i = 0; i <= Length; i++)
	{
		if (scrabble[i] == {[97]} || {[101]} || {[105]} || {[117]} || {[110]} || {[114]}  || {[111]} || {[115]} || {[108]} || {[116]})
		{
			score[i] = 1;
		}
			else if (scrabble[i] == {[103] || [100]})
			{
				score[i] = 2;
			}
				else if (scrabble[i] == {[109] || [98] || [99] || [112]})
				{
					score[i] = 3;
				}
					else if (scrabble[i] == {[121] || [102] || [118] || [119] || [104]})
					{
						score[i] = 4;
					}
						else if (scrabble[i] == {[106] || [120]})
						{
							score[i] = 8;
						}
							else if (scrabble[i] == {[113] || [122]})
							{
								score[i] = 10;
							}
								else
								{
									score[i] = 0;
								}
				
	}
	//goes through word and converts letters to numbers in a new array
	//if unknown character, adds 0
	for (int i = 0; i <= Length; i++)
	{
		total += score[i];
	}
	//adds all numbers and returns as score
	return total;
}
