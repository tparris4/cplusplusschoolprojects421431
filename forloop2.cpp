#include <iostream>
using namespace std;

int main()
{
  int x = 1;
	int min;
	int max;
	int y;
	cout << "Enter a positive number \n";
	cin >> x;
	if (x > 0)
	{
	cout << "Here are all the prime numbers from 1 to "<< x << "\n";
	for (int i = 1; i <= x; i++)
	{		
	  bool e = true;
	  for (int j = 1; j <= i-1; j++)
	  {
	    if (i % j == 0)
	    {
	       e = false;
	    }
	    
	  }
	  if (e == true)
		{
			cout << i;
		}	
	  
	}
	  
	}

	cin >> y;
  
}


