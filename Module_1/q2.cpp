#include<iostream>
#include<stdio.h>

int main()
{
      int a,b;
      printf("Enter number one: ");
      scanf("%d", &a);
      printf("Enter number two: ");
      scanf("%d", &b);
      if(a>b)
      {
            printf("%d larger.\n", a);
      }
      else if (a==b)
      {
            printf("The numbers are equal.\n");
      }
      else
      {
            printf("%d larger.\n", b);
      }
      
}