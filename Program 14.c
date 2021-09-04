// Pavan Kumar J 20201CCS0094

#include<stdio.h>
void main()
{
 int a,b,res1,res2;
 printf("Enter the values of a and b\n");
 scanf("%d%d",&a,&b);
 printf("Original value of a is %d, b is %d\n",a,b);
 res1=++a + --b;
 printf("After pre increment of a and pre decrement of b\n");
 printf(" a=%d, b=%d, res1=%d\n",a,b,res1);
 res2=a++ + b--;
 printf("After post increment of a and post decrement of b\n");
 printf(" a=%d, b=%d, res2=%d\n",a,b,res2);
}
