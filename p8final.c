/*Write a program to find Sum of n complex numb
ers
struct _complex
{
float real,imaginary;
};
typedef _complex Complex;
int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);*/

#include<stdio.h>
struct _complex
{
  float real,imaginary;
};
typedef struct _complex Complex;
int get_n()
{
  int n;
  printf("enter number of complex numbers=\n");
  scanf("%d",&n);
  return n;
}
Complex input_complex()
{
Complex num;
printf("enter a complex number=\n");
scanf("%f+%fi",&num.real,&num.imaginary);
return num;
}
void input_n_complex(int n,Complex c[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    c[i]=input_complex();
  }
}
Complex add(Complex a, Complex b)
{
  Complex res;
  res.real=a.real+b.real;
  res.imaginary=a.imaginary+b.imaginary;
  return res;
}
Complex add_n_complex(int n, Complex c[n])
{
 Complex result;
 result.real=0;
 result.imaginary=0;
 int i;
 for(i=0;i<n;i++)
 {
   result=add(result,c[i]);
 }
 return result;
}
void output(int n, Complex c[n], Complex result)
{
  int i;
  for(i=0;i<n-1;i++)
  {
    printf("%0.1f+%0.1fi+",c[i].real,c[i].imaginary);
  }
  printf("%0.1f+%0.1fi=%0.1f+%0.1fi\n",c[n-1].real,c[n-1].imaginary,result.real,result.imaginary);
}

int main()
{
  int n;
  n=get_n();
  Complex c[n],result;
  input_n_complex(n,c);
  result=add_n_complex(n,c);
  output(n,c,result);
  return 0;
}