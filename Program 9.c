#include <stdio.h>

// Pavan Kumar J 20201CCS0094

int main()
{
  int a,b,sum,diff,prod,quot,rem; 
  printf("enter the two numbers\n");
  scanf("%d%d",&a,&b);
  sum=a+b;
  printf("the sum of a= %d and b= %d is %d\n",a, b,sum);
  
  diff=a-b;
  printf("the diff of a= %d and b= %d is %d\n",a, b, diff);
  
  prod=a*b;
  printf("the product of a= %d and b= %d is %d\n",a, b, prod);
  
  quot=a/b;
  printf("the quotient of a= %d and b= %d is %d\n",a, b, quot);
   
  rem=a%b;
  printf("the reminder of a= %d and b= %d is %d\n",a, b, rem);
  return 0;
}
