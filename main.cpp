/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kaleah Gonzalez
 */

#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

int main()
{
  double a, b, c;

  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
  cout << "Enter the value of c: ";
  cin >> c;

  float discriminant, root1, root2;

  discriminant = b*b - 4*a*c;
  
  // for different cases of discriminant 
  if (discriminant > 0) {

    root1 = (-b + sqrt(discriminant)) / (2*a);
    root2 = (-b - sqrt(discriminant)) / (2*a);
    cout << "Roots are real." << endl;
    cout << "Root 1 = " << root1 << endl;
    cout << "Root 2 = " << root2 << endl;
  } 
  else if (discriminant == 0) {

    cout << "Roots are real." << endl;
    root1 = (-b + sqrt(discriminant)) / (2*a);
    cout << "Root = " << root1 << endl;
  }
  else {
      
    cout << "No real roots" << endl;
  }
   
}


