#include <iostream>

using namespace std;

int main() {
	int x;
	int y;

	cout << "Type in a positive integer number\n";
	cin >> x;
	
	if (x < 0)
		cout << "Invalid input: you inputted a 0 or negative number\n";
	if (x > 0){
	
	 	 if (x % 2 == 0 )
			cout << "Your number is even\n";
			else 
				cout << "Your number is odd\n";
		 if (x % 3 == 0)
					cout << "Your number is divisible by 3\n";
			else
					cout << "Your number is not divisible by 3\n";
		 if (x % 23 == 0)
						cout << "Your number is divisible by 23\n";
			else
						cout << "Your number is not divisible by 23\n";}

cin >> y;
}
