#include <iostream>
#include <string>

using namespace std;
int CalcScrabbleWordScore(char scrabble[], int& total, int Length);
// pre condition: Takes in character array as parameter
//post condition: Returns an integer value representing the score of that given word

int main()
{
	int y;
	char scrabble[10];
	int total;
	cout << "enter a lowercase word less than 10 letters to find scrabble score of: \n";
	cin >> scrabble;
	//cout << scrabble << endl;
	int Length;
	for (int i = 0; i < 10; i++)
	{
		if (scrabble[i] == '\0')
		{
		Length = i-1;
		break;
		}
	}
	//cout << Length << endl;
	//finds length of array

	CalcScrabbleWordScore(scrabble, total, Length);
	//takes in word and runs it through function
	//cout << scrabble << endl;
	cout << "the score is: " << total << "\n";
	//outputs score
	cin >> y;

}

int CalcScrabbleWordScore(char scrabble[], int& total, int Length)
{
//	char letters[Length];
	int score[Length];
	//used to store numbers
	char alphabet[] = {"abcdefghijklmnopqrstuvwxyz"};

	//char alphabet[] = {"a b c d e f g h i j k l m n o p q r s t u v w x y z \0"};
	for (int i = 0; i <= Length; i++)
	{
		if (scrabble[i] == alphabet[0] || scrabble[i] == alphabet[5] || scrabble[i] == alphabet[8] || scrabble[i] ==  alphabet[20] || scrabble[i] ==  alphabet[13] || scrabble[i] ==  alphabet[17]  || scrabble[i] ==  alphabet[14] || scrabble[i] ==  alphabet[18] || scrabble[i] ==  alphabet[11] || scrabble[i] ==  alphabet[19])
		{

			score[i] = 1;
		}
			else if (scrabble[i] == alphabet[6] || scrabble[i] ==  alphabet[3])
			{
				score[i] = 2;
			}
				else if (scrabble[i] == alphabet[12] || scrabble[i] ==  alphabet[1] || scrabble[i] ==  alphabet[2] || scrabble[i] ==  alphabet[15])
				{
					score[i] = 3;
				}
					else if (scrabble[i] == alphabet[24] || scrabble[i] ==  alphabet[5] || scrabble[i] ==  alphabet[21] || scrabble[i] ==  alphabet[22] || scrabble[i] ==  alphabet[7])
					{
						score[i] = 4;
					}
						else if (scrabble[i] == alphabet[9] || scrabble[i] ==  alphabet[23])
						{

							score[i] = 8;
						}
							else if (scrabble[i] == alphabet[16] || scrabble[i] ==  alphabet[25])
							{
								score[i] = 10;
							}
								else
								{
									score[i] = 1;
								}


	}
	/*for (int x = 0; x <= Length; x++)
	{
		cout << score[x] << "\n";
	}*/
	//goes through word and converts letters to numbers in a new array
	//if unknown character, adds 0
	for (int j = 0; j <= Length; j++)
	{
		total += score[j];
	}
	return total;
	//cout << total << endl;
	//adds all numbers and returns as score

}
