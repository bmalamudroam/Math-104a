/*
Author: Benjamin Malamud-Roam
Last modified: 1/31/17
Purpose: Evaluate the Lebesgue function
         
Inputs: 
     > x_0,...,x_n
Outputs:
     > L_n(x), the lebesgue function associated with the given nodes
 */
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
double xnode(int m_param); //gives x sub m_param (nodes) 
double L_n(double x_param, int n_param); // Calculates Lebesgue function at x_param given n_param

int main()
{
  int n;
  double x;
  cout << "Enter a value for n for the lebesgue function: " << endl;
  cin >> n;
  cout << "Enter a value (x) which you would like the function evaluated at: " << endl;
  cin >> x;
  cout << "The lebesgue function value for your chosen value of x and n is "<< L_n (x, n) << endl;
  
  return 0;
}
double xnode(int m_param)
{
  return (m_param);
	    //replace m_param with whatever we want our mth node to me
}
double L_n(double x_param, int n_param)
{
  double sum = 0;
  for (int j = 0; j <= n_param; j++)
    {
      double product = 1;
      for (int k = 0; k <= n_param; k++)
	{
	  if (k != j)
	    {product *= ((x_param - xnode(k))/(xnode(j)-xnode(k)));}
	}
      product = abs(product);
      sum += product;
    }
  return sum;
}
