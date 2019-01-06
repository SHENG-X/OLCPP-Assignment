#include<stdio.h>
#include <string>
#include<iostream>
using namespace std;
bool checkPalindrome(int a);
int sumDigits(int a);

int main()
{
      int a;
      bool run = true;
      while(run)
      {
            printf("Enter a integer, (up to 5 digits): ");
            scanf("%d", &a);
            if(a<99999)
            {
                  run=false;
            }
      }
      if (checkPalindrome(a))
      {
            printf("Integer: %d is palindrome.\n", a);
      }
      else{
            printf("Integer: %d is not palindrome.\n", a);
      }
      printf("The sum of digits of the integer is: %d \n", sumDigits(a));
}

bool checkPalindrome(int a)
{
      string intarray = to_string(a);
      int arraylength = intarray.length();
      if(arraylength ==1 )
      {
            return false;
      }
      else if(arraylength%2==0)
      {
            if(arraylength/2==1)
            {
                  if(intarray[0]==intarray[1])
                  {
                        return true;
                  }
            }
            else if(arraylength/2==2)
            {
                  if(intarray[0]==intarray[3] && intarray[1] == intarray[2])
                  {
                        return true;
                  }
            }
      }
      else{
            if(arraylength/2==1)
            {
                  if(intarray[0]==intarray[2])
                  {
                        return true;
                  }
            }
            if(arraylength/2==2)
            {
                  if(intarray[0]==intarray[4] && intarray[1] == intarray[3])
                  {
                        return true;
                  }
            }
      }
        
      return false;
}

int sumDigits(int a)
{
      int sum=0;
      string intarray = to_string(a);
      for(int i=0; i<intarray.length();i++)
      {
            sum += stoi(string(1,intarray[i]));
      }
      return sum;
}