/**
 * @file Officer.cpp
 * @author Justin Haddock
 * @date 2025-04-21
 * @brief Implementation of the officer class
 * 
 * 
 */

#include "Officer.h"
#include <iostream>

using namespace std;


/**
 * Constructor
 *
 * @pre 
 * @post evilness is set to default 500 
 * 
 */
Officer::Officer() {
  evilness = 500;
}


/**
 * Inherits employee class and obtains information about the officer
 *
 * @param int ID employee id
 * @param int years years served
 * @param double hourlyRate wages
 * @param float hoursWorked 
 * @param double evilness is the officer your local buisnessman? or are they a megacorporate magnate responsible for exploiting the lower classes?
 * @pre 
 * @post 
 * 
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}


/**
 * prints the report
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}


/**
 * calculates the pay
 *
 * @pre 
 * @return double 
 * @post 
 * 
 */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
