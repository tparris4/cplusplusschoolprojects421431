// Purpose: TO give the number of equations to solve
// Author: Tyler Parris
// Date: 12/7/2016
// Section 1
// ID: 109464101
// Usage: i = problem_size()
// Arguments: none
// Returns: # of equations to solve

int rang::problem_size()
{
  return 4; // Return the number of equations as 4

}


// Purpose: TO give initial conditions for HW13
// Usage: problem_initial_conditions(double &t, double &tstop, double &tstep, double array0[])
// Arguments: &t (double pointer) Initial time, &tstop (double pointer) stop time, &tstep (double pointer) timestep size, array0 (double array) Vector of initial conditions
// Returns (void)

void rang::problem_initial_conditions(double& t, double& tstop, double& tstep, double array0[])

{
  const double g = 9.81;        // Acceleration
  const double angle = 34;      // Angle
  t = 0.0;                      // initial time
  tstop = 2.0                   // Timestop
    tstep = 0.0001;            // timestep size
  int v = 700;                 // Value for speed
  const double PI = 3.141592653;
  const double alp = 4e-5;
  double xn, yn, vxn, vyn     // Variables for new values
  array0[0] = 0.0                         // Initial value for x
  array0[1] = 0.0                          // Initial value for y
  array0[2] = v*cos(angle*PI/180.0);       // Initial value for vx
  array0[3] = v*sin(angle*PI/180.0);        // Initial value for vy
}
