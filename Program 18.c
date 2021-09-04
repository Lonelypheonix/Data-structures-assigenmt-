// Pavan Kumar J 20201CCS0094

#include<stdio.h> 
void main()

{ 
  float a,b,c,d,result1,result2,result3,result4; 

printf("enter the value of a, b,c and d\n"); 
scanf("%f%f%f%f",&a,&b,&c,&d);


result1 = a+b*c+d;

printf(" The output of the expression is %f\n",result1);

result2=a+(b*c)+d;

printf("The output of the expression is %f\n",result2);

result3=(a+b)*c+d;

printf("The output of the expression is %f\n",result3);

result4=(a+b)*(c+d);

printf("The output of the expression is %f\n",result4); 
}