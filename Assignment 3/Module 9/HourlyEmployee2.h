#include "Employee2.h"
class HourlyEmployee : public Employee2
{

  public:
    HourlyEmployee(const string, const string, const string, const Date, double = 0.0, double = 0.0);
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

HourlyEmployee::HourlyEmployee(const string firstName, const string lastName, const string socialSecurityNumber, const Date db, double _wage, double _hours) : Employee2(firstName, lastName, socialSecurityNumber, db)
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
    time_t t = time(0);
    tm *timePtr = localtime(&t);
    int month = timePtr->tm_mon + 1;
    if (month == Employee2::getDBM())
    {
        return wage*hours + 100;
    }
    return wage*hours;
}
void HourlyEmployee::print() const
{
    Employee2::print();
    cout<<"Wage is: "<<wage<<endl;
    cout<<"Hours are: "<<hours<<endl;
}

