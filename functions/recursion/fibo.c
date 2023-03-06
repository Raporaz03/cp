#include<stdio.h>
int fib(int new, int old,int term);
int main()
{
    int a=1,b=1,terms,fibo;
    printf("enter number of terms");
    scanf("%d",&terms );
    fibo=fib(a,b,terms);
    return 0;

}
int fib(int new, int old,int terms)
{
    int newterm;
  if(terms>=1)
  {
        newterm=new+old;
        printf("%d\t",newterm);
        terms=terms-1;
        fib(old,new,terms);

  }
}
