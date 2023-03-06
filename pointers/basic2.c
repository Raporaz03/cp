#include<stdio.h>
int main()
{
    int i=3,*j,**k;
    j=&i;
    k=&j;
    printf("value of k is %u\n",*j);
    printf("value of k is %u\n",**k);
    return 0;
}
