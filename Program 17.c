// Pavan Kumar J 20201CCS0094

#include<stdio.h>
void main()
{
 int a,b;
 float res1,res2,res3;
 printf("enter the value of a and b\n");
 scanf("%d%d",&a,&b);
 res1=a/b;
 printf("Result 1 = %f\n",res1);
 res2=(float)a/b;
 printf("Result 2 = %f\n",res2); 
 res3=a/3.0;
 printf("Result 3 = %f\n",res3);
}
