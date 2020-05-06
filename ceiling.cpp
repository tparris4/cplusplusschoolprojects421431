#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/** Function: floorAndError
Pre condition: use provides double representing number to be ceiling'd
Post condition: function returns doubles that is rounded up if positive or
"rounded down" if negative
**/
double ceilingAndError(double& ceiling, double& changed);

int main()
{
	int y;
    double integer;
    double change = 0.0;
    cout << "Input a number to take the ceiling of: \n";
    cin >> integer;
    ceilingAndError(integer, change);
    cout << "the ceiling is: " << integer << " and the input value was changed by: " << abs(change) << "\n";

	cin >> y;

}

double ceilingAndError(double& ceiling, double& changed)
{
    if (ceiling > 0.0)
    {
        changed = (ceiling) - ((int)ceiling+1);
        if (changed == -1)
        {		
        	changed = 0;
        }
        	
        ceiling = ceiling + abs(changed);
    }
        else if (ceiling < 0.0)
        {
            changed = ceiling - (int)ceiling;
            ceiling = ceiling - changed;

        }
            else
                ceiling = 0;

    return ceiling;
    return changed;

}
