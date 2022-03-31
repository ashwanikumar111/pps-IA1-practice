#include<stdio.h>
void input(int *a, int *b)
{
  printf("Enter the 1st Number: ");
  scanf("%d", a);
  printf("Enter the 2nd Number: ");
  scanf("%d", b);
}
void add(int a, int b, int *sum)
{
  *sum=a+b;
}
void output(int a, int b, int sum)
{
  printf("The Sum of %d + %d = %d\n", a, b, sum);
}
int main()
{
  int a,b,sum;
  input(&a, &b);
  add(a,b, &sum);
  output(a,b,sum);
  return 0;
}