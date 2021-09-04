#include <stdio.h>

// Pavan 20201CCS0094

int main()
{
  int m, n, x, y, a, b; 
  float total; 
  printf("enter the cost of apple per kg: ");
  scanf("%d",&m);
  printf("enter the quantity of apple per purchased: ");
  scanf("%d",&n);
  printf("enter the cost of oranges per kg: ");
  scanf("%d",&x);
  printf("enter the quanity of oranges purchased: ");
  scanf("%d",&y);
  printf("enter the cost of pomegranate per kg: ");
  scanf("%d",&a);
  printf("enter the quanity of pomegranate purchaed: ");
  scanf("%d",&b);
  total=((m*n)+(x*y)+(a*b));
  printf(" total amount = %f",total);
  return 0;
}