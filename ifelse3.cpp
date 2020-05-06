#include <iostream>

using namespace std;

int main() {
	int money;
	int x;
	/*int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;*/
	cout << "Type in an integer representing how much money you have?\n";
	cin >> money;
	
/*	if (money < 250)
		int a = money;
	else if (money <= 250)
		int b = money;
	else if (money <= 350)
		int c = money;
	else if (money <= 600)
		int d = money;
	else if (money <= 850)
		int e = money;	
	else if (money >= 950 && money <= 1200)
		int f = money;
	else
		int g = money;*/
		
	
	if (money < 250){
	
		cout << "You can't buy a dog\n";
		cout << "You can't buy a phone\n";
		cout << "You can't buy a computer\n";
		cout << "You can't buy a dog and a phone\n";
		cout << "You can't buy a dog and a computer\n";
		cout << "You can't buy a phone and a computer\n";
		cout << "You can't buy a dog, a phone, and a computer\n";}
		
	else if (money <= 250){
	
		cout << "You can buy a dog\n";
		cout << "You can't buy a phone\n";
			cout << "You can't buy a computer\n";
			cout << "You can't buy a dog and a phone\n";
			cout << "You can't buy a dog and a computer\n";
			cout << "You can't buy a phone and a computer\n";
			cout << "You can't buy a dog, a phone, and a computer\n";}
			
	else if (money <= 350){
	
				cout << "You can buy a dog\n";
				cout << "You can buy a phone\n";
				cout << "You can't buy a computer\n";
				cout << "You can't buy a dog and a phone\n";
				cout << "You can't buy a dog and a computer\n";
				cout << "You can't buy a phone and a computer\n";
				cout << "You can't buy a dog, a phone, and a computer\n";}
				
	else if (money <= 600)
	{
				cout << "You can buy a dog\n";
				cout << "You can buy a phone\n";
				cout << "You can buy a computer\n";
				cout << "You can buy a dog and a phone\n";
				cout << "You can't buy a dog and a computer\n";
				cout << "You can't buy a phone and a computer\n";
				cout << "You can't buy a dog, a phone, and a computer\n";}
				
	else if (money < 950)
	{
	
				cout << "You can buy a dog\n";
				cout << "You can buy a phone\n";
				cout << "You can buy a computer\n";
				cout << "You can buy a dog and a phone\n";
				cout << "You can buy a dog and a computer\n";
				cout << "You can't buy a phone and a computer\n";
				cout << "You can't buy a dog, a phone, and a computer\n";}
				
	else if (money >= 950 && money <= 1199)
	{
	
				cout << "You can buy a dog\n";
				cout << "You can buy a phone\n";
				cout << "You can buy a computer\n";
				cout << "You can buy a dog and a phone\n";
				cout << "You can buy a dog and a computer\n";
				cout << "You can buy a phone and computer\n";
				cout << "You can't buy a dog, a phone, and a computer\n";}
				
	else
	{
	
					cout << "You can buy a dog\n";
					cout << "You can buy a phone\n";
					cout << "You can buy a computer\n";
					cout << "You can buy a dog and a phone\n";
					cout << "You can buy a dog and a computer\n";
					cout << "You can buy a phone and computer\n";
					cout << "You can buy a dog, a phone, and a computer\n";}
					
	cin >> x;
}

