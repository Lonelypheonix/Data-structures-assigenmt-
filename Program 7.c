//Pavan Kumar J 20201CCS0094

#include<stdio.h> 
int main() 
{ 
 int a,b, temp;
 printf("Enter the values of a and b\n");
 scanf("%d%d",&a,&b);
 printf("Before swap... a = %d b= %d", a,b); 
 temp = a; 
 a = b; 
 b = temp; 
 printf("\nAfter swap... a = %d b = %d", a,b); 
 return 0; 
}
