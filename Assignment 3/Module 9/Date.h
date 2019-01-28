#include <iostream>
#include <string>
using namespace std;

class Date
{
  private:
    int month, day, year;

  public:
    //These are consturctors
    Date();
    Date(int, int, int);
    //Destructor
    ~Date() {}
    //void do not return values
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    int getDay()const;
    int getMonth() const;
    int getYear() const;
};
Date::Date()
{
    //Initialize variables.
    month = 0, day = 0, year = 0;
}
Date::Date(int Month, int Day, int Year)
{
    month = Month;
    day = Day;
    year = Year;
}
void Date::setDay(int d)
{
    if (d < 1 && d > 31)
        cout << "The day is invalid" << endl;
    else
        day = d;
}
void Date::setMonth(int m)
{
    if (m < 1 && m > 12)
        cout << "The month is invalid" << endl;
    else
        month = m;
}
void Date::setYear(int y)
{
    if (y < 1950)
        cout << "The year is invalid" << endl;
    else
        year = y;
}

int Date::getDay() const
{
    return day;
}
int Date::getMonth() const 
{
    return month;
}
int Date::getYear() const
{
    return year;
}