// Fig. 11.9: fig11_09.cpp
// Testing class BasePlusCommissionEmployee.
#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.h" // class definition
#include "BasePlusCommissionEmployee.cpp" // class definition
#include "CommissionEmployee.h"
#include "CommissionEmployee.cpp"

using namespace std;

int main()
{
   // instantiate BasePlusCommissionEmployee object
   BasePlusCommissionEmployee
      employee( "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );

   // set floating-point output formatting
   cout << fixed << setprecision( 2 );

   // get commission employee data
   cout << "Employee information obtained by get functions: \n"
      << "\nFirst name is " << employee.getFirstName()
      << "\nLast name is " << employee.getLastName()
      << "\nSocial security number is "
      << employee.getSocialSecurityNumber()
      << "\nGross sales is " << employee.getGrossSales()
      << "\nCommission rate is " << employee.getCommissionRate()
      << "\nBase salary is " << employee.getBaseSalary() << endl;

   employee.setBaseSalary( 1000 ); // set base salary

   cout << "\nUpdated employee information output by print function: \n"
      << endl;
   employee.print(); // display the new employee information

   // display the employee's earnings
   cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;


   CommissionEmployee commissionEmployee("Danny", "Louis", "333-33-5555", 5000, .04);
   // get commission employee data
   cout << "Employee information obtained by get functions: \n"
      << "\nFirst name is " << commissionEmployee.getFirstName()
      << "\nLast name is " << commissionEmployee.getLastName()
      << "\nSocial security number is "
      << commissionEmployee.getSocialSecurityNumber()
      << "\nGross sales is " << commissionEmployee.getGrossSales()
      << "\nCommission rate is " << commissionEmployee.getCommissionRate();
   
   commissionEmployee.print(); // display the new employee information
   cout << "\n\nEmployee's earnings: $" << commissionEmployee.earnings() << endl;

   //new added commission employee 
   CommissionEmployee newCommissionEmployee("James", "Sean", "259-39-1984", 5500, 0.6);
   // get commission employee data
   cout << "Employee information obtained by get functions: \n"
        << "\nFirst name is " << newCommissionEmployee.getFirstName()
        << "\nLast name is " << newCommissionEmployee.getLastName()
        << "\nSocial security number is "
        << newCommissionEmployee.getSocialSecurityNumber()
        << "\nGross sales is " << newCommissionEmployee.getGrossSales()
        << "\nCommission rate is " << newCommissionEmployee.getCommissionRate();

   newCommissionEmployee.print(); // display the new employee information
   cout << "\n\nEmployee's earnings: $" << newCommissionEmployee.earnings() << endl;

} // end main

// TODO - Add an object of CommissionEmployee
// Run the print method of CommissionEmployee


