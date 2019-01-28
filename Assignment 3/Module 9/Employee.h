#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include <ctime>
using namespace std;
class Employee
{
    private:
        string firstName;
        string lastName;
        string socialSecurityNumber;
      public:
        Employee(string, string, string);
        void setFirstName(string);
        void setLastName(string);
        void setSSN(string);
        string getFirstName() const;
        string getLastName()const;
        string getSSN()const;
        virtual double earnings() const = 0;
        virtual void print() const;
};

Employee::Employee(string fname,string lname,string ssn)
{
    firstName = fname;
    lastName = lname;
    socialSecurityNumber = ssn;
}

void Employee::print() const
{
    cout<<firstName<<" "<<lastName<<" social security number: "<<socialSecurityNumber<<endl;
}
#endif