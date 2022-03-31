#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the size of the array ");
  scanf("%d",  &n);
  return n;
}
void input_array(int n, int a[n])
{
  int i, sum=0;
  for(i=0;i<n;i++)
  {
    printf("enter the number ");
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n, int a[n])
{
  int i, sum=0;
  for(i=0;i<n;i++)
  {
    sum = sum + a[i];
  }
  return sum;
}
void output(int n, int a[n], int sum)
{
  int i;
  for(i=1;i<n;i++)
  {
    printf("%d + ",i);
  }
  printf("%d is %d", a[n-1], sum);
}
int main()
{
  int i, n, sum, a[i];
  n = input_array_size();
  input_array(n, a);
  sum = sum_n_arrays(n, a);
  output(n, a, sum);
}