#include <stdio.h>

//Pavan 20201CCS0094

int main()
{
  int m1,m2,m3,m4,m5;
  float avg; 
  printf(" enter the marks \n");
  scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
  avg= (m1+m2+m3+m4+m5)/5; 
  printf("Average = %f",avg);
  return 0;
}