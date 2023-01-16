#include <stdio.h>
#include <stdlib.h>

void triangle(int nb ,int longu,char mot){
    int i,j,k;
    for (i=1;i<=nb;i++)
        for(j=1;j<=longu;j++){
            for(k=1;k<=j;k++)
                printf("%c",mot);
                printf("\n");
        }
  }
int main()
{  int nbr , lon , motif;
    printf("donner le motif:  ") ;
    scanf("%c", &motif);
    printf("donner la longueur:  ") ;
    scanf("%d", &nbr);
    printf("donner le nombre: ") ;
    scanf("%d\n",&lon);
    triangle(nbr,lon,motif);
    return 0;
}
