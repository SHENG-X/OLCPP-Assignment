#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include <ctime>
#include "Date.h"
using namespace std;
class Employee2
{
  private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    Date birthDate;

  public:
    Employee2(string, string, string, Date);
    void setFirstName(string);
    void setLastName(string);
    void setSSN(string);
    void setDB(Date);
    int getDBM()const;
    string getFirstName() const;
    string getLastName() const;
    string getSSN() const;
    virtual double earnings() const = 0;
    virtual void print() const;
};

Employee2::Employee2(string fname, string lname, string ssn, Date _birthDate)
{
    firstName = fname;
    lastName = lname;
    socialSecurityNumber = ssn;
    birthDate = _birthDate;
}
void Employee2::setFirstName(string firstName)
{
    firstName = firstName;
}
void Employee2::setLastName(string lastName)
{
    lastName = lastName;
}
void Employee2::setSSN(string socialSecurityNumber)
{
    socialSecurityNumber = socialSecurityNumber;
}
void Employee2::setDB(Date _birthDate)
{
    birthDate = _birthDate;
}

string Employee2::getFirstName() const
{
    return firstName;
}
string Employee2::getLastName() const
{
    return lastName;
}
string Employee2::getSSN() const
{
    return socialSecurityNumber;
}
int Employee2::getDBM() const
{
    return birthDate.getMonth();
} 

void Employee2::print() const
{
    cout << firstName << " " << lastName << " social security number: " << socialSecurityNumber << " Birth Date Month: " << getDBM() << endl;
}
#endif