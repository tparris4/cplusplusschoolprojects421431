#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	cout << "Input the height of your right triangle\n";
	cin >> x;
	for (int i = x+1; i > 1; i--){
		for (int j = x-1; j >= i; j--){
			if (j >= 1 && j != i)
				cout << " ";
			else
				cout << "*";
		}
		cout << "\n";
		cout << "*";
	
}
	for (int o = x-1; o >= 1; o--)
		cout << "*";
cin >> y;
}

