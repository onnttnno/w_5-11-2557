#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int maximum(int a,int b,int c,int d);
int main()
{
    int x;
    int a, b,c,d;
    int e,f,g,h;
    int i;
    printf ("Input a number: ");
    scanf("%d",&x);
    a=x%1000;
    b=x%100;
    c=x%10;
    d=x;
    e=(x-a)/1000;
    f=((x-b)-(x-a))/100;
    g=((x-c)-(x-b))/10;
    for( i=1000;i<11;i=/10)
/*printf("Input a number: %d\n",(x-a)/1000);
printf("Input a number: %d\n",((x-b)-(x-a))/100);
printf("Input a number: %d\n",((x-c)-(x-b))/10);
printf("Input a number: %d\n",c);
printf("maximum is : %d\n",maximum( c, e, f, g)*1111);
printf("sum is :%d ",(maximum( c, e, f, g)*1111)+x);*/

    return 0;
}
int maximum(int a,int b,int c,int d)
{
    int max=a;
    if(b>max)
    {
        b=max;
    }
     if(c>max)
    {
        c=max;
    }
     if(d>max)
    {
        d=max;
    }
    return max;
}
