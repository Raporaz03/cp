#include<stdio.h>
float areaperi(int,float *,float *);
int main()
{
  int radius;
  float area,perimeter;
  printf("Enter radius");
  scanf("%d",&radius);
  areaperi(radius,&area,&perimeter);
  printf("area is %d perimeter is %d",area,perimeter);
  return 0;
}
float areaperi(int r,float a,float p)
{
    *a=3.14*r*r;
    *p=2*3.14*r;
}