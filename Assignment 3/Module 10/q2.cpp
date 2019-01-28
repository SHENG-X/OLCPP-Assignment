#include <iostream>
#include <string>
#include "../Module 9/SalariedEmployee2.h"
using namespace std;

class WishHappyBD : public exception
{
    private:
        int month;
    public:
        const char *what()
        {
            return "Happy Birthday!";
        }
        void getMonth() { cout << "Your birth month is" << month << endl; }
        void setMonth(int month) { this->month = month; }
};



int main()
{
    string firstName;
    string lastName;
    string socialSecurityNumber;
    int day, month, year;
    double salary;
    Date birthDay;
    cout<<"Enter your first name: ";
    cin>>firstName;
    cout<<"Enter your last name: ";
    cin>>lastName;
    cout<<"Enter your socail security number:";
    cin>>socialSecurityNumber;
    cout<<"Enter your birth year: ";
    cin>>year;
    cout<<"Enter your birth month: ";
    cin >> month;
    cout << "Enter the day of birth: ";
    cin>>day;
    birthDay = Date(month, day, year);
    cout<<"Enter you salary: ";
    cin >> salary;
    SalariedEmployee employee(firstName, lastName, socialSecurityNumber, birthDay);
    time_t t = time(0);
    tm *timePtr = localtime(&t);
    int current_month = timePtr->tm_mon + 1;
    cout << "Current Month: " << current_month << endl;    
    try
    {
        if (employee.getDBM() == current_month)
        {
            WishHappyBD wish;
            wish.setMonth(employee.getDBM());
            throw wish;
        }
    }
    catch (WishHappyBD ex)
    {
        cout << ex.what()<<endl;
    }
    
}