#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * @class Officer
 * @brief A class representing an Officer, derived from Employee.
 * 
 * Officers have an added "evilness" factor which influences their pay.
 */
class Officer : public Employee {
 private:
  /**
   * @brief The evilness level of the Officer.
   */
  double evilness;

 public:
  /**
   * @brief Default constructor.
   */
  Officer();

  /**
   * @brief Parameterized constructor.
   * 
   * @param ID Employee ID
   * @param years Years of service
   * @param hourlyRate Hourly wage
   * @param hoursWorked Hours worked
   * @param evilness Evilness score (affects pay)
   */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);

  /**
   * @brief Prints Officer details including evilness.
   */
  void print();

  /**
   * @brief Calculates pay including evilness bonus.
   * 
   * @return Modified pay including evilness.
   */
  double calculatePay();
};

#endif // OFFICER_H
