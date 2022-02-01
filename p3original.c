/*Write a program to find Sum of n numbers
a. Sum of n numbers
int input_n();
int sum_n(int n);
void output(int n, int sum);*/

#include<stdio.h>
int input_n()
{
  int n;
  printf("enter how many numbers=\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int sum=0,i=1;
  while (i<=n)
  {
    sum=sum+i;
    i=i+1;
  }
  return sum;
}
void output(int n, int sum)
{
  for(int i=1;i<n;i++)
  {
    printf("%d+",i);
  }
  printf("%d=%d",n,sum);
}
int main()
{
  int n,sum;
  n=input_n();
  sum=sum_n(n);
  output(n,sum);
  return 0;
}