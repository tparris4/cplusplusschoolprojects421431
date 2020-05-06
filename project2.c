
#include <stdio.h>

char s;
int x;
int y;

int PrintHeader();
int PrintMainMenu();
int PrintMenuInstructions();
int PrintMenuChoicePrompt();

int main()
{
	int PrintHeader( char s, int x, int y)
		printf("This function displays the header.\n")
		printf("Press the ENTER key to clear the screen.\n")
		getchar();
		
		return 0;
		system("cls");
		
		PrintMainMenu();

}

int PrintMainMenu()
{
	printf("This is the main menu.\n")
	printf("Press c for the instructions.\n")
		
		c = getchar();
		putchar(c);
	
		system("cls")
		
		PrintMenuInstructions();
}

int PrintMenuInstructions()
{
	printf("These are the instructions for the menu.\n")
	printf("Insert instructions here. Press c when ready.\n")
		c = getchar();
		putchar(c);
	system("cls")
	
	PrintMenuChoicePrompt();
	
}

int PrintMenuChoicePrompt()
{
	printf("Do you want to continue using this program?\n")
	y = getchar();
	putchar(y);
	printf("Okay.\n")
	n = getchar();
	putchar(n);
	printf("Thank you for using this program.\n")
	
	
	
}
