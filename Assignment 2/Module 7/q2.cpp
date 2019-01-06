#include <iostream>
#include <ctime>
using namespace std;
class Date
{
      struct tm bd = {0};
      public:
        time_t date;
        int daysDifference;
        void getBirthDate();
        Date operator-(const Date &);
};

void Date::getBirthDate()
{
      int year, month, day;
      cout<<"Enter the year that you were born(yyyy): ";
      cin>>year;
      cout<<"Enter the month that you were born(mm): ";
      cin>>month;
      cout<<"Enter the day that you were born(dd): ";
      cin>>day;
      year = year-1900;
      bd.tm_hour = 0;
      bd.tm_min=0;
      bd.tm_sec =0;
      bd.tm_year = year;
      bd.tm_mon = month-1;
      bd.tm_mday =day;
      date = std::mktime(&bd);
}
Date Date::operator-(const Date& d)
{     
      Date temp;
      temp.daysDifference = difftime(d.date, date) / (60 * 60 * 24);
      return temp;
}

int main()
{
      Date bDate;
      Date dateNow;
      Date Result;
      time_t now;
      time(&now);
      dateNow.date = now;
      bDate.getBirthDate();
      Result = bDate - dateNow;
      std::cout << "The days from your birthday to now is: " << Result.daysDifference << std::endl;
}