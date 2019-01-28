#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee{
    private:
        double baseSalary;
    public:
        BasePlusCommissionEmployee(const string, const string,
                                 const string, const double, const double,
                                 double=0.0);
        void setBaseSalary(double);
        double getBaseSalary() const;
        virtual double earnings()const;
        virtual void print()const;
};
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string firstName, const string lastName,
                                                       const string socialSecurityNumber, double grossSales,
                                                       double commissionRate, double _baseSalary) : CommissionEmployee(firstName, lastName, socialSecurityNumber, grossSales, commissionRate)
{
    baseSalary = _baseSalary;
}

void BasePlusCommissionEmployee::setBaseSalary(double _baseSalary)
{
    baseSalary = _baseSalary;
}

double BasePlusCommissionEmployee::getBaseSalary()const
{
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
    return baseSalary + CommissionEmployee::grossSales * CommissionEmployee::commissionRate;
}

void BasePlusCommissionEmployee::print()const{
    CommissionEmployee::print();
    cout<<"Base Salary: "<<baseSalary<<endl;

}