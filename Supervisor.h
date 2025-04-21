/**
 * @file Supervisor.h
 * @author Justin Haddock
 * @date 2025-04-21
 * @brief THe Supervisor class
 * 
 * A supervisor class that inherits its core functionality from employee
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * Prints a supervisor report
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();

/**
 * Calculates the pay
 *
 * @pre 
 * @return double 
 * @post 
 * 
 */
  double calculatePay();

/**
 * Constructors for the supervisor class
 *
 * @pre 
 * @post 
 * 
 */
  Supervisor();
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
