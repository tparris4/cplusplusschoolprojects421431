// Author: Tyler Parris
// Date: 11/30/2016
// ID: 109464101
// Purpose: Write a program that uses Euler's method to solve the trajectory of a cannonball by using given equations
// Session 1
// Answer = 21840.4
// tstep = 0.0001
/*
tstep, value x, value y
0.01,  21835.8,   7.15465
0.01,  21838,     4.44949
0.005, 21840.1,  1.74372
0.0025, 21841.2,  0.390538
0.00125, 21841.8, 0.286131

tstep, value x, value y
0.001, 21839.8, 0.900617
0.001, 21840, 0.63002
0.001, 21840.2, 0.359417
0.0005, 21840.4, 0.0888076
0.00025, 21840.5, -0.0465001

tstep, value x,value y
0.0001, 21840.3, 0.0837889
0.0001, 21840.4, 0.0567279
0.0001, 21840.4, 0.0296669
5e-05, 21840.4, 0.00260582
2.5e-05, 21840.4, -0.0109247



 */
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    const double g = 9.81;                             // Acceleration
    const double angle = 34;                                // Angle
    double t=0.0, tstep=0.0001;                    // Values for t, stop t, timestep size
    double xn, yn, vxn, vyn;                           // Vari for new values
    int v = 700;                                       // Value for speed
    double x=0.0, y=0.0, vx, vy;                      // Initial positions
    const double PI = 3.141592653;
    const double alp = 4e-5;
    
     vx = v*cos(angle*PI/180.0);
     vy = v*sin(angle*PI/180.0);
    do {
      // vx = v*cos(angle*PI/180.0);
       //vy = v*sin(angle*PI/180.0);
	xn = x+vx*tstep;                                    // Equation 1
      	yn = y+vy*tstep;                                    // Equation 2 
        vxn = vx-alp*v*vx*tstep;                        // Equation 3
        vyn = vy-alp*v*vy*tstep-g*tstep;                     // Equation 4
      	v = hypot(vxn, vyn);                                   // New value of velocity
        x = xn;                                              // Value to hold vx
        y = yn;                                              // Value to hold vy
        vx = vxn;                                            // Value to hold vxn
        vy = vyn;                                            // Value to hold vyn
	if (y + vyn*tstep < 0.0){                            // Case for value approaching 0.0
	  tstep = tstep*0.5;}
        cout << tstep << "," << x << "," << y << endl;}
    while (y > pow(10,-5));                                 // Loop continues before vertical height = 0.0
    cout << x << endl;
    return 0;
}





