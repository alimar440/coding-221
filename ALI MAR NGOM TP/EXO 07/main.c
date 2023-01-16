#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,j,r,s,t=11;
printf(" LES NOMBRES DONT LA SOMME DE LEURS COMPOSANTS EST EGALE A 11 SONT :");
   for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            if(i+j==t){
        printf("\n%d%d ",i,j);
        }
        }
   }
    return 0;
}
