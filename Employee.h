/**
 * @file Employee.h
 * @author Justin Haddock
 * @date 2025-04-21
 * @brief The employee class header file
 * 
 * Contains the declarations for all of employee's methods, no real implementation here just the table of contets
 */


#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * Object class for an employee, containing hourly rate, hours worked, and other bits of data the employer may wish to know
 *
 * @class Employee Employee.h "Doxygen325/Employee.h"
 * @brief Stats about an Employee
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:

/**
 * Prints the data about the desired employee
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual void print();

/**
 * Calculates the correct pay for the employee
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual double calculatePay();

/**
 * Congradualtes the employee for their anniversary
 *
 */
  void anniversary();
  // Constructors
  Employee();
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
