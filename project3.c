
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>




#define CardDeck 52
typedef int Deck[CardDeck];


void ConfigureDeck(Deck);
void Shuffle(Deck);

void PlayerA(Deck);
void PlayerB(Deck);

void ShowCard(int);
void ShowDeck(Deck);
void Deal(Deck);

int main()
{
	printf("Welcome to the War card game. The game will now begin.\n")
	  Deck s;
        
        srand(time(NULL));
        ConfigureDeck(s);
        ShowDeck(s);    
        ShuffleDeck(s);
        Deal(s);
        
		return 0;
	
}


void ConfigureDeck(Deck deck) 
{ 
	int i;
	for (i=0; i< CardDeck ; i++) 
    { 
        deck[i] = i; 
    }
}


void ShowCard(int card) 
{
	static char Suit[4] = {'Diamond','Club','Heart','Spade'};
	static char Face[13] = {'A', '2','3','4','5','6','7','8','9','10','Jack','Queen','King',};
    printf ("%c%c", Face[card%13], Suit[card/13]);
    
}


