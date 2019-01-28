#ifndef CommissionEmployee_h
#define CommissionEmployee_h
#include "Employee2.h"
class CommissionEmployee : public Employee2
{
  protected:
    double grossSales;     // gross weekly sales
    double commissionRate; // commission percentage
  public:
    CommissionEmployee(const string, const string,
                       const string, const Date db, double = 0.0, double = 0.0);
    void setGrossSales(double);
    void setCommissionRate(double);
    double getGrossSales() const;
    double getCommissionRate() const;
    virtual double earnings() const;
    virtual void print() const;
};
CommissionEmployee::CommissionEmployee(const string firstName, const string lastName,
                                       const string socialSecurityNumber, Date db, double _grossSales, double _commissionRate) : Employee2(firstName, lastName, socialSecurityNumber, db)
{
    grossSales = _grossSales;
    commissionRate = _commissionRate;
}

void CommissionEmployee::setGrossSales(double _grossSales)
{
    grossSales = _grossSales;
}

void CommissionEmployee::setCommissionRate(double _commissionRate)
{
    commissionRate = _commissionRate;
}

double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}

double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

double CommissionEmployee::earnings() const
{
    time_t t = time(0);
    tm *timePtr = localtime(&t);
    int month = timePtr->tm_mon + 1;
    if (month == Employee2::getDBM())
    {
        return grossSales * commissionRate + 100;
    }
    return grossSales * commissionRate;
}
void CommissionEmployee::print() const
{
    Employee2::print();
    cout << "Gross Sales: " << grossSales << endl
         << "Commission Rate: " << commissionRate << endl;
}
#endif