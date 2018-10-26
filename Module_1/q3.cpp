#include<stdio.h>
int main()
{
      float miles_daily, 
      cost_per_gallon_gas, 
      avg_miles_per_gallon,
      parking_fee,
      tolls,
      total_cost;

      printf("Enter miles driven per day: ");
      scanf("%f", &miles_daily);
      printf("Enter cost per gallon of gasoline: ");
      scanf("%f", &cost_per_gallon_gas);
      printf("Enter average miles per gallon: ");
      scanf("%f",&avg_miles_per_gallon);
      printf("Enter parking fees per day: ");
      scanf("%f", &parking_fee);
      printf("Enter tolls per day: ");
      scanf("%f",&tolls);

      total_cost = miles_daily/avg_miles_per_gallon*cost_per_gallon_gas+parking_fee+tolls;
      printf("You daily cost of driving is $%0.2f \n", total_cost);
}