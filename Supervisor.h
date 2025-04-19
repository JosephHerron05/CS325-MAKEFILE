#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

/**
 * @class Supervisor
 * @brief A class that represents a supervisor, derived from Employee.
 * 
 * The Supervisor class includes an additional attribute for how many
 * employees are being supervised, which affects pay.
 */
class Supervisor : public Employee {
 private:
  /**
   * @brief Number of employees supervised by this Supervisor.
   */
  int numSupervised;

 public:
  /**
   * @brief Default constructor.
   */
  Supervisor();

  /**
   * @brief Parameterized constructor.
   * 
   * @param ID Employee ID
   * @param years Years of employment
   * @param hourlyRate Hourly wage
   * @param hoursWorked Hours worked
   * @param numSupervised Number of people supervised
   */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);

  /**
   * @brief Prints information including number supervised.
   */
  void print();

  /**
   * @brief Calculates pay including supervision bonus.
   * 
   * @return Pay with a 1% bonus per person supervised.
   */
  double calculatePay();
};

#endif // SUPERVISOR_H
