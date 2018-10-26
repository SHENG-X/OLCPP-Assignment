#include<stdio.h>
#include <string>
#include<iostream>
using namespace std;
float earning(float grosssales);
int main()
{
      bool run=true;
      string sales;
      while(run)
      {
            printf("Enter the salesperson's gross sales (Q quit): ");
            cin>>sales;
            if(sales=="Q" || sales=="q")
            {
                  run=false;
            }
            else{
                  try
                  {
                        printf("Salesperson's earnings: %.2f\n", earning(stoi(sales)));
                  }
                  catch(exception e)
                  {
                        printf("You need to enter a sales amount!\n");
                  }
            }
            
      }

}
float earning(float grosssales)
{
      return 200+grosssales*9./100.;
}