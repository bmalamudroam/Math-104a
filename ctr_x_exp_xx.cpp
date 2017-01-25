/*
Author: Benjamin Malamud-Roam
Last modified: 1/24/17
Purpose: Approximate an integral using the
         composite trapazoidal rule quadrature
Inputs: 
     > a = initial x value
     > b = final x value
     > f(x) = function we would like to approximate the integral of
     > N = number of subintervals we will be using in the approximation
Outputs:
     > T_f = The CTR approximation of the integral of x given the above inputs
 */
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
double f_x(double x_param); //serves as whatever function we would like to approximate
double T_x(int N_param, double h_param, double a_param, double b_param); // Calculates CTR 
int main()
{
  int N;
  double h, a, b;
  
  cout << "Input an initial x value for the interval: ";
  cin >> a;
  cout << "Input a final x value for the interval: ";
  cin >> b;
  cout << "Input the number of subintervals you would like to use for this approximation: ";
  cin >> N;
  h = (b-a)/N;
  cout << "The appoximation is: " << T_x(N,h,a,b) << endl;
  return 0;
}
double f_x(double x_param)
{
  return (x_param)*exp((x_param*x_param));
}
double T_x(int N_param, double h_param, double a_param, double b_param)
{
  double ctr=.5*h_param*(f_x(a_param)+f_x(b_param));
  for (int count = 1; count < N_param; count++)
    {
      ctr += (h_param * f_x(a_param+(count*h_param)));
    }
  return ctr;
}
