#include "Employee2.h"
class SalariedEmployee : public Employee2
{
    public:
      SalariedEmployee(const string, const string,
                       const string, const Date, double = 0.0);
      void setWeeklySalary(double);
      double getWeeklySalary() const;
      virtual double earnings() const;
      virtual void print() const; // "salaried employee: "
    private:
        double weeklySalary;
}; // end class SalariedEmployee
SalariedEmployee::SalariedEmployee(const string firstName, const string lastName, const string socialSecurityNumber, const Date db, double _weeklySalary) : Employee2(firstName, lastName, socialSecurityNumber, db)
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
    time_t t = time(0);
    tm *timePtr = localtime(&t);
    int month = timePtr->tm_mon + 1;
    if(month==Employee2::getDBM()){
        return weeklySalary * 4+100;
    }
    return weeklySalary * 4;
}

void SalariedEmployee::print() const
{
    Employee2::print();
    cout << "Weekly Salary: " << weeklySalary << endl;
}