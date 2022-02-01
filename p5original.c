/*Write a program to find the square root of a number.
float input();
float my_sqrt(float n);
void output(float n, float sqrt_result);*/

#include<stdio.h>
float input()
{
  float n;
  printf("enter a number=\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float sqrt_result;
  sqrt_result=n/2;
  float root=0;
  while(sqrt_result!=root)
  {
   root=sqrt_result;
   sqrt_result=(n/root+root)/2;
  }
  return sqrt_result;
}
void output(float n, float sqrt_result)
{
  printf("square root of %0.2f=%0.2f\n",n,sqrt_result);
}
int main()
{
  float n,sqrt_result;
  n=input();
  sqrt_result=my_sqrt(n);
  output(n,sqrt_result);
  return 0;
}