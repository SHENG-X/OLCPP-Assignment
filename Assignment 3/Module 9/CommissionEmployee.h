#ifndef CommissionEmployee_h
#define CommissionEmployee_h
#include "Employee.h"
class CommissionEmployee : public Employee{
    protected:
        double grossSales; // gross weekly sales
        double commissionRate; // commission percentage
    public:
        CommissionEmployee(const string, const string,
                         const string, double = 0.0, double = 0.0);
        void setGrossSales(double);
        void setCommissionRate(double);
        double getGrossSales() const;
        double getCommissionRate() const;
        virtual double earnings() const;
        virtual void print() const;
};
CommissionEmployee::CommissionEmployee(const string firstName, const string lastName,
                                       const string socialSecurityNumber, double _grossSales, double _commissionRate) : Employee(firstName, lastName, socialSecurityNumber)
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
    return grossSales * commissionRate;
}
void CommissionEmployee::print() const
{
    Employee::print();
    cout << "Gross Sales: " << grossSales << endl
         << "Commission Rate: " << commissionRate << endl;
}
#endif