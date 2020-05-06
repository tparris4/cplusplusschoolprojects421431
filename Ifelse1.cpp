#include <iostream>

using namespace std;

int main() {
	int x;
	int y;
	cout << "Input your year in school as an integer \n";
	cin >> x;
	if (x == 1)
		cout << "You are a Freshman \n";
	else if (x == 2)
		cout << "You are a Sophomore \n";
	else if (x == 3)
		cout << "You are a Junior \n";
	else if (x == 4)
		cout << "You are a Senior \n";
	else if (x >= 5)
		cout << "You are a Super Senior \n";
	else 
		cout << "Invalid input: year is less than or equal to 0 \n";
		
	cin >> y;
}
