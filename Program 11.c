#include <stdio.h>

// Pavan Kumar J 20201CCS0094

int main()
{
  float rad,circum, area, pi=3.14159; 
  printf("Enter the radius\n");
 scanf("%f",&rad); 
 circum=2*pi*rad;
 area=pi*rad*rad;
 printf("The circumference of circle is = %f",circum);
 printf("\nThe area of circle is = %f",area);
  return 0;
}
