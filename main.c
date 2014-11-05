#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double x,y;
int z;
double squre_(int x)
{
    return x*x;
}
 int lo(double y,double z)
{
    return (log10(y))/z;
}
int main()
{
    double result;
    int a,b;
    printf(" 1 input: ");
    scanf("%lf",&x);
    printf(" 2 input: ");
    scanf("%lf",&y);
    printf(" 3 input: ");
    scanf("%d",&z);
    a=squre_(x);
    b=lo( y, z);
    printf(" resurte : %lf\n",sqrt(a+b));
    result=sqrt((x*x)+(log10(y)/z));
    printf(" resurte : %lf",result);
    /*printf("Hello world!: \n");
    scanf("%lf",&x);

    printf("Hello world!:  \n");
    scanf("%lf",&y);
        c=exp(x*sin(y)*sin(y));
    printf("Hello world!: %lf\n",c);*/
    return 0;
}
