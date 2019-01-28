#include "Employee2.h"
#include "SalariedEmployee2.h"
#include "HourlyEmployee2.h"
#include "CommissionEmployee2.h"
#include "BasePlusCommissionEmployee2.h"
#include <vector>
int main()
{
    vector<Employee2 *> employees(7);
    // initialize vector with various kinds of Employees
    employees[0] = new SalariedEmployee("John", "Smith", "111-11-1111", Date(1, 14, 1995), 800);
    employees[1] = new SalariedEmployee("John", "Smith", "111-11-1111", Date(2, 14, 1995), 800);
    employees[2] = new CommissionEmployee("Sue", "Jones", "333-33-3333", Date(1, 14, 1995), 10000, .06);
    employees[3] = new CommissionEmployee("Sue", "Jones", "333-33-3333", Date(2, 14, 1995), 10000, .06);
    employees[3] = new BasePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", Date(1, 14, 1995), 5000, .04, 300);
    employees[4] = new BasePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", Date(2, 14, 1995), 5000, .04, 300);
    employees[5] = new HourlyEmployee("John", "Charles", "111-11-1111", Date(1, 14, 1995), 26, 80); // polymorphically process each element in vector employees
    employees[6] = new HourlyEmployee("John", "Charles", "111-11-1111", Date(2, 14, 1995), 26, 80); // polymorphically process each element in vector employees
    for (Employee2 *employeePtr : employees)
    {
        time_t t = time(0);
        tm *timePtr = localtime(&t);
        int month = timePtr->tm_mon + 1;
        cout<<"Current Month: "<<month<<endl;
        employeePtr->print(); // output employee information dynamically through the realted print function
        cout<<"Earning: $"<<employeePtr->earnings()<<endl; // output employee information dynamically through the realted print function
        cout << endl;
    }
}