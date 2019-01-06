#include "q2.cpp"

int main()
{
      printf("Initial constructor Date(10, 31, 2018)");
      Date mydate = Date(10, 31, 2018);
      printf("-----------------------Test Getters-----------------------------\n");
      printf("Test get Month: %d, %s\n", mydate.getMonth(), (mydate.getMonth()==10?"Pass":"Fail"));
      printf("Test get Day: %d, %s\n", mydate.getDay(), (mydate.getDay() == 31 ? "Pass" : "Fail"));
      printf("Test get Day: %d, %s\n", mydate.getYear(), (mydate.getYear() == 2018 ? "Pass" : "Fail"));
      printf("Test dispayDate:\n");
      mydate.dispayDate();
      printf("-----------------------Test Setters-----------------------------\n");
      printf("Set Month to 6\n");
      mydate.setMonth(6);
      printf("Get Month: %d, %s\n", mydate.getMonth(), (mydate.getMonth() == 6 ? "Pass" : "Fail"));
      printf("Set Day to 21\n");
      mydate.setDay(21);
      printf("Get Month: %d, %s\n", mydate.getDay(), (mydate.getDay() == 21 ? "Pass" : "Fail"));
      printf("Set Year to 1999\n");
      mydate.setYear(1999);
      printf("Get Month: %d, %s\n", mydate.getYear(), (mydate.getYear() == 1999 ? "Pass" : "Fail"));
      return 0;
}