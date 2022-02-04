struct _complex
{
  float real,imaginary;
};
typedef _complex complex;
complex input_complex()
{
complex x;
printf("enter a real, imaginary number");
scanf("%f%f\n", &x.real, &x.imaginary);
return x;
}
complex add (complex a, complex b)
{
  complex c;
  c.real = a.real + b.real;
  c.imaginary = a.imaginary + b.imaginary;
  return c;
}
void output(complex a, complex b, complex c);
{
  printf("%f+%fi+%f+%fi is %f+%fi" real a, realb)