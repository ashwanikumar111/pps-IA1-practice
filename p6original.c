#include<stdio.h>
void input_two_strings(char a[50], char b[50]);
int strcmp(char a[50], char b[50]);
void output(char a[50], char b[50], int result);
int main()
{
  char a[50], b[50];
  int sum1,sum2,result;
  input_two_strings(a,b);
  result=strcmp(a,b);
  output(a,b,result);
  return 0;
}
void input_two_strings(char a[50], char b[50])
{
  printf("enter any two strings\n");
  scanf("%s",a);
  scanf("%s",b);
}
int strcmp(char a[50], char b[50])
{
  int i=0,sum1=0,sum2=0,result;
  for(i=0;a[i]!='\0';i++)
  sum1+=a[i];
  for(i=0;b[i]!='\0';i++)
  sum2+=b[i];
  if(sum1>sum2)
  result=1;
  else
  if(sum1<sum2)
  result=0;
  else
  if(sum1==sum2)
  result=2;
  return result;
}
void output(char a[50], char b[50], int result)
{
  if (result==1)
  printf("%s is greater than %s\n",a,b);
  else
  if(result==0)
  printf("%s is greater than %s\n",a,b);
  else
  if(result==2)
  printf("%s is equal to %s\n",a,b);
}