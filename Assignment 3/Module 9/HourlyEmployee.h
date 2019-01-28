#include "Employee.h"
class HourlyEmployee : public Employee {

public:
HourlyEmployee(const string,const  string,const  string, double = 0.0, double = 0.0);
void setWage(double);
double getWage() const;
void setHours(double);
double getHours() const;
virtual double earnings() const;
virtual void print() const;

private:
double wage;  // wage per hour
double hours; // hours worked for week }; // end class HourlyEmployee
};

HourlyEmployee::HourlyEmployee(const string firstName,const string lastName,const string socialSecurityNumber, double _wage, double _hours) : Employee(firstName, lastName, socialSecurityNumber)
{
    wage=_wage;
    hours=_hours;
}
void HourlyEmployee::setWage(double _wage)
{
    wage = _wage;
}
void HourlyEmployee::setHours(double _hours)
{
    hours = _hours;
}
double HourlyEmployee::getWage() const
{
    return wage;
}

double HourlyEmployee::getHours() const
{
    return hours;
}

double HourlyEmployee::earnings() const
{
    return wage*hours;
}
void HourlyEmployee::print() const
{
    Employee::print();
    cout<<"Wage is: "<<wage<<endl;
    cout<<"Hours are: "<<hours<<endl;
}

