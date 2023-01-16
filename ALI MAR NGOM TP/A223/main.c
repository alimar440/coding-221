#include <stdio.h>
#include <stdlib.h>

int som1(int q){
   if (q == 1)
      return 2 ;
   else
       return q * (q + 1) + som1(q-1) ;
}
int som2(int z){
    int S = 0 ;
    for(int i = 1 ; i <= z ; i++)
        S += i * (i + 1) ;
    return S ;
}

int main()
{
     int n ;
    printf("donnez un nombre \n") ;
    scanf("%d",&n) ;
    int som01 = som1(n) ;
    int som02 = som2(n) ;
    printf("methode 1 \n %d \n methode 2 \n %d ",som01,som02) ;
    return 0;
}
