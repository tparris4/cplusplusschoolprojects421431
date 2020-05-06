#include <iostream>
#include <cmath>
using namespace std;

/** Function: floorAndError
Pre condition: use provides double representing number to be flooored
Post condition: function returns doubles that is rounded down if positive or
"rounded up" if negative
**/
double floorAndError(double& floor, double& changed);

int main()
{
	int y;
    double integer;
    double change;
    cout << "Input a number to take the floor of: \n";
    cin >> integer;
    floorAndError(integer, change);
    cout << "The floor is: " << integer << " and the input value was changed by: " << change << "\n";

	cin >> y;

}

double floorAndError(double& floor, double& changed)
{
    if (floor > 0.0)
    {
        changed = (int)floor - floor;
        floor = floor + changed;
    }
        else if (floor < 0.0)
        {
            changed = abs(((int)floor-1)) + floor;
            if (changed == 1)
            {
            	changed = 0;
			}
			else
			{
				changed = 0 - changed;
			}
            floor = floor + changed;

        }
            else
                floor = 0;

    return floor;
    return changed;

}
