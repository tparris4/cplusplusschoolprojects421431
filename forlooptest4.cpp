#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	cout << "Enter how many stars you want in the first row \n";
	cin >> x;
	for (int i = 1; i <= x; i++){
		for (int j = x; j >= i; j--){
		
			cout << "*";
		}
		cout << "\n";
}
cin >> y;
}
