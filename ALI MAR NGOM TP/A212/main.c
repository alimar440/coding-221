#include <stdio.h>
#include <stdlib.h>

void exo2(int a ,int  b , int *c ,int *d ,int *g ){

   if(  a == 0 || b == 0 )
       *g = 0 ;
    else {
            *g = 1 ;
            *c =  a / b ;
            *d = b / a ;
    }
}
int main()
{
    int q , w , e , r , t;

     printf("donner deux valeur\n");
     scanf("%d  %d",&q,&w);

     exo2(q,w,&e,&r,&t);
    if (t==0)
        printf(" divisions impossible " );
    else
        printf("les divisions sont realisables \n\n  ");
        printf("\n le resultat de la division de %d par %d est \n e = %d ",q,w,e);
        printf("\n\n\n le resultat de la division de %d par %d est\n r = %d \n\n",w,q,r);

       return 0;
  }


