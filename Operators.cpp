#include <iostream>
using namespace std;

int main()
{
	int x;
	int sum;
	int product;
	int y;
	cout << "Input a positive number \n";
	cin >> x;
	for (int z = 0; z <= x; z++){
	
	sum += z;
	cout << "The sum from 1 to your number is " << sum << "\n";
}
	for (int z = 0; z <= x; z++){
	
	product *= z;
	cout << "The product from 1 to your number is " << product << "\n";
}
	cin >> y;

}
