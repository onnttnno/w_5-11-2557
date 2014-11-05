#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int nearest_prime(int n)
{

    int i,j;
    int prime;
    for(i=n-1;i>=2;i--)
    {
        if(n%i== 0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int x,j;
    int y , i;
    printf("Input a num : ");
    scanf("%d",&x);
    //printf("nearest_prime(x):%d\n",nearest_prime(x));
  for(i=2;i<x;i++)
   {
           if( (nearest_prime(i))==0)
           {
               j=i;
           }
   }
   printf("nearest_prime(x):%d\n",j);

    //printf("Nearest_prime: %d",nearest_prime(x));*/

    return 0;
}
