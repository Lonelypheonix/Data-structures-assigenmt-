#include <stdio.h>

//Pavan Kumar J 20201CCS0094

int main()
{
  float gross,basic, hra,da,netsalary,porftax=200,incometax; 
  printf(" Enter the basic salary, HRA, DA\n");
  scanf("%f%f%f",&basic,&hra,&da);
  gross=basic+hra+da;
  printf("Gross salary = %f\n",gross);
  incometax=0.1*gross;
  netsalary= gross-porftax-incometax;
  
  printf(" NET SALARY =%f",netsalary);
  return 0;
}