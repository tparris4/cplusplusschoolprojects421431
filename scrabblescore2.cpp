#include <iostream>

using namespace std;
int CalcScrabbleWordScore(char scrabble[]);
// pre condition: Takes in character array as parameter
//post condition: Returns an integer value representing the score of that given word

int main()
{
	int y;
	char scrabble[11];
	cout << "enter a lowercase word less than 10 letters to find scrabble score of: \n";
	cin >> scrabble;


	int grandsum = CalcScrabbleWordScore(scrabble);

	cout << "the score is: " << grandsum;


}

int CalcScrabbleWordScore(char scrabble[])
{
    char alphabet[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    //zint score[] = { 1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    //zint score[] = { 1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    int score[] = { 1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    int sum = 0;

	for (int letter = 0; letter < 10; letter++){
        char z = scrabble[letter];
        for (int index = 0; index < 26; index++){
            if (z == alphabet[index])
            {
                int most = score[index];
                sum += most;
            }
        }
	}
	return sum;

}
