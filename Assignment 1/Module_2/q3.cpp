#include<iostream>
#include<stdio.h>
int factorial(int a);

    int main()
{
      int i, n, sum;
      printf("Enter your N to start: ");
      scanf("%d", &n);
      if(n==1)
      {
            sum = 1/factorial(0);
      }
      else if(n==2)
      {
            sum = 1 / factorial(0) + 1 / factorial(1);
      }
      else if (n == 3)
      {
            sum = 1 / factorial(0) + 1 / factorial(1) + 2 / factorial(2);
      }
      else if (n == 4)
      {
            sum = 1 / factorial(0) + 1 / factorial(1) + 2 / factorial(2) + 3 / factorial(3);
      }
      else if(n ==5){
           sum = 1 / factorial(0) + 1 / factorial(1) + 2 / factorial(2) + 3 / factorial(3)+4 / factorial(4); 
      }
      else if(n>5)
      {
            sum = 1 / factorial(0) + 1 / factorial(1) + 2 / factorial(2) + 3 / factorial(3) + 4 / factorial(4);
            for(i=5;i<n;i++)
            {
                  sum+=4/factorial(i);
            }

      }
      printf("Sum is %d\n", sum);
}

int factorial(int a)
{
      int i,j=1;
      if(a==0)
      {
            return 1;
      }
      else if(a == 1){
            return 1;
      }
      for(i=1;i<=a;i++)
      {
            j*=i;
      }
      return j;
}