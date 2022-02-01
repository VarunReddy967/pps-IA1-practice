/*Add two numbers using 4 functions and Pass by reference
void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);*/

#include<stdio.h>
void input(int *a,int *b)
{
  printf("Enter the first number:\n");
  scanf("%d",a);
  printf("Enter the second number:\n");
  scanf("%d",b);
}
void add(int a, int b, int *sum)
{
  *sum=a+b;
}
void output(int a, int b, int sum)
{
  printf("%d+%d=%d\n",a,b,sum);
}
int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  output(x,y,z);
  return 0;
}