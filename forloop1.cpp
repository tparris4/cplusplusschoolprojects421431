#include <iostream>
using namespace std;

int main()
{
	int x;
	int sum = 0;
	int product = 1;
	int y;
	cout << "Input a positive number \n";
	cin >> x;
	if (x <= 0)
	cout << "Invalid input: input not positive \n";
	else
	{
	
		for (int z = 1; z <= x; z++){
	sum = sum + z;
}
cout << "The sum from 1 to your number is " << sum << "\n";
		for (int o = 1; o <= x; o++){
	product = product * o;
}

	cout << "The product from 1 to your number is " << product << "\n";
	cin >> y;
}
}
