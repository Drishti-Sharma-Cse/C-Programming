#include<stdio.h>
int main()
{
    int rad, area,cir;
    printf("Enter radius of Circle");
    scanf("%d",&rad);
    area=3.14*rad*rad;
    cir=2*3.14*rad;
    printf("Area of Circle%d \n",area);
    printf("Circumference of Circle%d \n",cir);
    return 0;
}