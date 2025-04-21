/**
 * @file Supervisor.cpp
 * @author Justin Haddock
 * @date 2025-04-21
 * @brief Implementation for supervisor class
 * 
 * Inherits employee class, with mods to fit supervisor class
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;


/**
 * Constructor
 *
 * @pre 
 * @post sets default var to -1
 * 
 */
Supervisor::Supervisor() {
  numSupervised = -1;
}


/**
 * Gets the data about a supervisor
 *
 * @param int ID employee #
 * @param int years years served
 * @param double hourlyRate wage
 * @param float hoursWorked 
 * @param int numSupervised people over
 * @pre 
 * @post 
 * 
 */
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}


/**
 * prints the report about the supervisor
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}


/**
 * Calculates pay with adjustments based on people over
 *
 * @pre 
 * @return double 
 * @post 
 * 
 */
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
