#include <iostream>
#include <stdio.h>
#include <string>

class Date
{
      private:
            int month;
            int day;
            int year;
      public:
            Date(int m, int d, int y)
            {
                  month = m;
                  day = d;
                  year = y; 
            };
            void setMonth(int m)
            {
                  month = m;
            }
            void setDay(int d)
            {
                day = d;  
            }
            void setYear(int y)
            {
                  year = y;
            }
            int getMonth()
            {
                  return month;
            }
            int getDay()
            {
                  return day;
            }
            int getYear()
            {
                  return year;
            }
            void dispayDate(){
                  printf("Date is %d/%d/%d\n", month, day, year);
            }
};
