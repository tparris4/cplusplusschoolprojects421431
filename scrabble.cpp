#include <iostream>
    
      
using namespace std;



//prototype 

int calcScrabbleWordScore(char w[]);

int main()
{
	//cstring
	char x[11];
	cout << "enter a lowercase word less than 10 letters to find scrabble score of: \n";
	cin >> x;

	int r = calcScrabbleWordScore(x);

	cout << "the score is: " <<r<<"";
}
//function def
int calcScrabbleWordScore(char w[])
{
	//arrays
	char myAlphabet[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int myscore[] = { 1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10,};
	int total = 0;
	//loops in array
	for (int letter = 0; letter< 10; letter++) {

		char x = w[letter];
			for (int index = 0; index<26; index++) {
				//myAlphabet[index]==x;
				if (x == myAlphabet[index]) {
					int score = myscore[index];
					total += score;
				}
			}
	}
	return total;
} 