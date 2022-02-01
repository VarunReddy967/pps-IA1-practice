/*Write a program to find largest of 3 numbers using 4 functions using Pass by value
int input()
int cmp(int a, int b, int c)
void output(int a, int b, int c, int largest)*/

#include<stdio.h>
int input()
{
  int a;
  printf("Enter a number:\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a, int b, int c)
{
  int largest;
  largest=(a>b)?(a>c?a:c):(b>c?b:c);
  return largest;
}
void output(int a, int b, int c, int largest)
{
  printf("%d is largest\n",largest);
}
int main()
{
  int x,y,z,large;
  x=input();
  y=input();
  z=input();
  large=cmp(x,y,z);
  output(x,y,z,large);
  return 0;
}