#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include <vector>
int main(){
    Employee *workers[5];
    workers[0] = new SalariedEmployee("Abe", "Fortas", "000-11-2343", 1000.00);
    workers[1] = new HourlyEmployee("Bobby", "McDonald", "324-12-2096", 17.50, 40);
    workers[2] = new HourlyEmployee("Emilio", "Jones", "234-89-0022", 14.00, 50);
    workers[3] = new CommissionEmployee("Sue", "Jones", "333-33-3333", 10000, .06);
    workers[4] = new BasePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", 5000, .04, 300);
    for (int i = 0; i < 5; i++)
    {
        workers[i]->print();
        cout << "earned $" << workers[i]->earnings() << endl<<endl;
    }

    cout<<endl<<"-----------------------VECTOR HERE-----------------------"<<endl;
    vector<Employee *> employees(4);
    // initialize vector with various kinds of Employees
    employees[0] = new SalariedEmployee("John", "Smith", "111-11-1111", 800);
    employees[1] = new CommissionEmployee("Sue", "Jones", "333-33-3333", 10000, .06);
    employees[2] = new BasePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", 5000, .04, 300);
    employees[3] = new HourlyEmployee("John", "Charles", "111-11-1111", 26, 80); // polymorphically process each element in vector employees
    for (Employee *employeePtr : employees)
    {
        employeePtr->print(); // output employee information dynamically through the realted print function
        cout << endl;
    }
    cout << endl
         << "-----------------Increase BasePlusCommissionEmployee Salary-----------------" << endl;
    Employee *employeePtr = employees[2];
    BasePlusCommissionEmployee *derivedPtr =
        dynamic_cast<BasePlusCommissionEmployee *>(employeePtr);
    // determine whether element points to a BasePlusCommissionEmployee if ( derivedPtr != nullptr ) // true for "is a" relationship
    {
        double oldBaseSalary = derivedPtr->getBaseSalary();                                       // get the old salary
        cout << "old base salary: $" << oldBaseSalary << endl;                                    //print old salary
        derivedPtr->setBaseSalary(1.10 * oldBaseSalary);                                          // provide a 10% raise
        cout << "new base salary with 10% increase is: $" << derivedPtr->getBaseSalary() << endl; // get the new salary
    }                                                                                             // end if
    cout << "earned $" << employeePtr->earnings() << "\n";
}