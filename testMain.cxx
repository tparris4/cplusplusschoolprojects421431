#include <iostream>
#include "testNode.h"

using namespace std;

void printLinkedList(node* headPtr);

int main()
{
	int userInput=0;
	int number;
	cout<<"input a positive number to insert into the linked list or a negative number to quit"<<endl;
	cin >> number;
	//two node pointers to get you started
	node *headPtr=NULL;
	node *currentPtr=NULL;

	if (number > 0)
    {
        headPtr = new node(number);
        headPt = currentPtr;
    }
    while (number < 0)
    {
        cout << "Try again" << endl;
        cin >> number;
    }

    printLinkedList(headPtr);
}

void printLinkedList(node* headPtr)
{
	node* temp = headPtr;
	while (temp != NULL)
    {
        cout << temp -> link() << endl;
    }

	//last line of your pirnt function
	cout<<"NULL"<<endl;
}
