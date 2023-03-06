#include<stdio.h>
void result(int ,int ,int,float *,float *);
int main()
{
    float avg,per;
    int m1,m2,m3;
    printf("ENter marks od 3 sunjects");
    scanf("%d%d%d",&m1,&m2,&m3);
    result(m1,m2,m3,&avg,&per);
    printf("Average marks %f and per is %f",avg,per);
    return 0;

}
void result(int m1,int m2,int m3,float *a,float *p)
{
    *p=*a=(m1+m2+m3)/3.0f;
}