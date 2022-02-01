/*Write a program to find Sum of two complex numbers
struct _complex
{
float real,imaginary;
}; <brtypedef _complex Complex
Complex input_complex();
Complex add(Complex a, Complex b);
void output(Complex a, Complex b, Complex c);*/

#include<stdio.h>
struct _complex{
  float real,imaginary;
};
typedef struct _complex Complex;
Complex input_complex()
{
  Complex num;
  printf("enter real number of first complex number=\n");
  scanf("%f",&num.real);
  printf("enter imaginary number of first complex number=\n");
  scanf("%f",&num.imaginary);
  return num;
}
Complex add(Complex a,Complex b)
{
  Complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}
void output(Complex a,Complex b,Complex c)
{
 printf("%0.1f+%0.1fi+%0.1f+%0.1fi=%0.1f+%0.1fi\n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  Complex a,b,c;
  a=input_complex();
  b=input_complex();
  c=add(a,b);
  output(a,b,c);
  return 0;
}