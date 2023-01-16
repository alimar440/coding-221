#include <stdio.h>
#include <stdlib.h>

int som1(int n)
{
   if( n == 1)
       return 1 ;
   return som1(n-1) ;
   }
int main()
{
    int a , som2 ;
    scanf("%d",&a);
    som2 = som1(a) ;
    printf("la somme des %d premier entier est %d ",a,som2);
    return 0;
}
