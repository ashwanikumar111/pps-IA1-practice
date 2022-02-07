#include<stdio.h>
int input() {
  int a;
  printf(" enter a number:");
  scanf("%d", &a);
  return a;
}
int compare(int a, int b, int c)
{
  if(a>b)
  {
    if(a>c)
    {
      return a;
    }
    else
    {
      return c;
    }
  }
  else
  {
    if(b>c)
    {
      return b;
    }
      else
      {
        return c;
      }
    }
  }
void output(int largest)
{
  printf("the largest element is: %d\n", largest);
}
int main()
{
  int a, b, c, largest;
  a=input();
  b=input();
  c=input();
  largest = compare(a, b, c);
  output (largest);
  return 0;
}

      
      
    