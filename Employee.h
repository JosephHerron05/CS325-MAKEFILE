#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * @class Employee
 * @brief A base class representing a generic employee.
 * 
 * Stores basic employee details and provides virtual methods for printing
 * information and calculating pay, intended for inheritance.
 */
class Employee {
 private:
  /**
   * @brief Employee ID number.
   */
  int ID;

  /**
   * @brief Number of years the employee has worked.
   */
  int years;

 protected:
  /**
   * @brief Hourly pay rate.
   */
  double hourlyRate;

  /**
   * @brief Total hours worked.
   */
  float hoursWorked;

 public:
  /**
   * @brief Default constructor.
   */
  Employee();

  /**
   * @brief Parameterized constructor.
   * 
   * @param ID Employee ID
   * @param years Years of employment
   * @param hourlyRate Hourly wage
   * @param hoursWorked Hours worked
   */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);

  /**
   * @brief Prints employee information.
   */
  virtual void print();

  /**
   * @brief Calculates employee pay.
   * 
   * @return Pay as hourlyRate * hoursWorked.
   */
  virtual double calculatePay();

  /**
   * @brief Simulates a work anniversary.
   * 
   * Increments years and applies a 0.2% raise.
   */
  void anniversary();
};

#endif // EMPLOYEE_H
