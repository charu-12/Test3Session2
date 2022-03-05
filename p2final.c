#include<stdio.h>
void input(int *n,int *r)
{
  printf("N=\n");
  scanf("%d",n);
  printf("R=\n");
  scanf("%d",r);
}
int factorial(int a)
{
  int fact=1;
  for(int i=1;i<=a;i++)
    {
      fact=fact*i;
    }
  return fact;
}
int ncr(int n,int r)
{
  int result;
  result=factorial(n)/(factorial(n-r)*factorial(r));
  return result;
}
void output(int n,int r,int result)
{
  printf("%d C %d= %d",n,r,result);
}
int main()
{
  int n,r,result;
  input(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
  return 0;
}