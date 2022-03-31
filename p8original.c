#include<stdio.h>
typedef struct _complex
{
  float real;
  float imaginary;
}Complex;

int get_n()
{
  int n;
  printf("Enter the number of complex numbers: ");
  scanf("%d", &n);
  return n;
}

void input_n_complex(int n, Complex c[n])
{
  for(int i=0; i<n; i++)
  {
    printf("Enter the real part: ");
    scanf("%f", &c[i].real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c[i].imaginary);
  }
}

Complex add_n_complex(int n, Complex c[n])
{
  Complex res;
  res.real = 0;
  res.imaginary = 0;
  for(int i=0; i<n; i++){
    res.real += c[i].real; 
    res.imaginary += c[i].imaginary;
  }
  return res;
}

void output(int n, Complex c[n], Complex result)
{
  if(n==1)
  {
      printf("%0.2f + %0.2fi is %0.2f + %0.2fi\n", c[0].real, c[0].imaginary, result.real, result.imaginary);
  }
  else
  {
      for(int i=0; i<n-1; i++)
      {
        printf("%0.2f + %0.2fi\n", c[i].real, c[i].imaginary);
      }
      printf("+ %0.2f + %0.2fi =\n%0.2f + %0.2fi\n", c[n-1].real, c[n-1].imaginary, result.real, result.imaginary);
  }

}

int main()
{
  int n = get_n();
  Complex c[n], res;
  input_n_complex(n, c);
  res = add_n_complex(n, c);
  output(n, c, res);
  return 0;
}

