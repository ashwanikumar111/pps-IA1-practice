#include<stdio.h>
float input()
{
  float n;
  printf("enter a number to find the sqaure root of: ");
  scanf("%f", &n);
  return n;
}
float squareroot(float n)
{
  float x = n;
  float y = 1;
  float e = 0.000001;
  while(x-y>e)
  {
    x = (x+y)/2;
    y=n/x;
  }
  return x;
}
void output(float n, float sres)
{
  printf("squareroot of given input %0.2f is = %0.2f\n", n, sres);
}
int main()
{
  float n, sres;
  n = input();
  sres = squareroot(n);
  output(n, sres);
  return 0;
}
