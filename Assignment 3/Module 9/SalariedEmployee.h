#include "Employee.h"
class SalariedEmployee : public Employee
{
    public:
      SalariedEmployee(const string, const string,
                       const string, double = 0.0);
      void setWeeklySalary(double);
      double getWeeklySalary() const;
      virtual double earnings() const;
      virtual void print() const; // "salaried employee: "
    private:
        double weeklySalary;
}; // end class SalariedEmployee
SalariedEmployee::SalariedEmployee(const string firstName, const string lastName,const string socialSecurityNumber, double _weeklySalary ):Employee(firstName, lastName, socialSecurityNumber)
{
    weeklySalary = _weeklySalary;
}
void SalariedEmployee::setWeeklySalary(double salary)
{
    weeklySalary = salary;
}
double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
}

double SalariedEmployee::earnings()const
{
    return weeklySalary*4;
}

void SalariedEmployee::print() const
{
    Employee::print();
    cout << "Weekly Salary: " << weeklySalary << endl;
}