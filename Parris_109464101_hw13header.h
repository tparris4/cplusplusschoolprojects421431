//
//   This header file contains the namespace Parris_109464101_hw13namespace and the function prototypes for use in homework 13. 
//
//
//

namespace Parris_109464101_hw13namespace {         // ODE Functions namespace

  //Declaration of problem size funct
  int problem_size();
  // Declaration of problem initial conditions funct
  void problem_initial_conditions(double& t, double& tstop, double& tstep, double array[]);

  // Declaration of problem RHS function
  void problem_rhs(double& t, double array0[], double rhs[]);

}
