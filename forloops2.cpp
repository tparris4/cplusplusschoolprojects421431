#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	int y;
	cout << "Enter a positive number or negative number to exit \n";
	cin >> x;
	int max = x;
	int min = x;
	while (x>=0){

		if (x == 0)
			continue; 
		if (x >= max)
		max = x;
		if (x <= min)
		min = x;
		cout << "Enter a positive number or negative number to exit \n";
		cin >> x;
		
	}
	cout << "The maximum positive number entered is " << max << "\n";
	cout << "The minimum positive number entered is " << min << "\n";

	cin >> y;
	

}
