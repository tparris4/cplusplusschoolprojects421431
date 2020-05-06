#include <iostream>

using namespace std;

int main() {
	char x;
	int y;
	cout << "Input your grade:\n";
	cin >> x;

	switch (x)
	{
	case 'a':
		cout << "You got a score of 90 or above\n";
		break;
	case 'b':
		cout << "You got a score between 80 and 89\n";
		break;
	case 'c':
		cout << "You got a score between 70 and 79\n";
		break;
	case 'd':
		cout << "You got a score between 60 and 69\n";
		break;
	case 'f':
		cout << "You got a score between 0 and 59\n";
		break;
	default:
		cout << "You inputted an invalid grade\n";
		break;
	}
	cin >> y;
}
