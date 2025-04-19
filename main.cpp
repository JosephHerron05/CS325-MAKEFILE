#include <iostream>
#include "Employee.h"
#include "Supervisor.h"
#include "Officer.h"

using namespace std;

// Function to run a series of tests on an Employee object (or derived class object)
void runEmployeeTests(Employee & e);

int main() {
  // --- Testing default Employee constructor ---
  Employee defaultE;
  cout << "Testing Employee default constructor:" << endl;
  runEmployeeTests(defaultE);

  cout << endl << endl;

  // --- Testing parameterized Employee constructor ---
  // ID: 1248, Years: 2, Hourly Rate: 15.23, Hours Worked: 3
  Employee parameterizedE(1248, 2, 15.23, 3);
  cout << "Testing Employee parameterized constructor:" << endl;
  runEmployeeTests(parameterizedE);

  cout << endl << endl;
  
  // --- Testing default Supervisor constructor ---
  Supervisor defaultS;
  cout << "Testing Supervisor default constructor:" << endl;
  runEmployeeTests(defaultS);

  cout << endl << endl;

  // --- Testing parameterized Supervisor constructor ---
  // ID: 422, Years: 9, Hourly Rate: 55.44, Hours Worked: 20, Supervises: 52
  Supervisor parameterizedS(422, 9, 55.44, 20, 52);
  cout << "Testing Supervisor parameterized constructor:" << endl;
  runEmployeeTests(parameterizedS);

  cout << endl << endl;

  // --- Testing default Officer constructor ---
  Officer defaultO;
  cout << "Testing Officer default constructor:" << endl;
  runEmployeeTests(defaultO);

  cout << endl << endl;

  // --- Testing parameterized Officer constructor ---
  // ID: 2, Years: 94, Hourly Rate: 10.859, Hours Worked: 2, Evilness: 9000.1
  Officer parameterizedO(2, 94, 10.859, 2, 9000.1);
  cout << "Testing Officer parameterized constructor:" << endl;
  runEmployeeTests(parameterizedO);
  
  return 0;
}

// Function to test core functionality of an Employee (or derived) object
void runEmployeeTests(Employee &e) {
  // Polymorphic call to the print() method
  cout << "Initial print():" << endl;
  e.print();

  // Polymorphic call to calculatePay()
  cout << "Calculated Pay: " << e.calculatePay() << endl;

  // Test the anniversary behavior
  cout << "Anniversary Test: ";
  e.anniversary();

  // Print again to see updated values after anniversary
  cout << "Final print():" << endl;
  e.print();
}