/**
 * @file Officer.h
 * @author Justin Haddock
 * @date 2025-04-21
 * @brief The header file for the officer object
 * 
 * Contains the declarations for various methods of the Officer, including how evil they are
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * Inherits the employee class, but with added modifications for officers
 *
 * @class Officer Officer.h "Doxygen325/Officer.h"
 * @brief The Officer object class
 *
 */
class Officer : public Employee {
 private:
  double evilness;
 public:

/**
 * Prints a report on a certain officer
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
 * contructors for the Officer
 *
 * @pre 
 * @post 
 * 
 */
  Officer();
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
