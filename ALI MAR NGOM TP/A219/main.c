#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int H,R,Rs ;
    int nb=0;
    srand(time(NULL));
    H= rand() % 1000;

    do{

       printf("donner un nombre\n");
       scanf("%d",&R);
       if(R<H){
          printf("trop petit\n");
          Rs=0;
              }
       else{
           if(R>H) {
              printf("trop grand\n");
              Rs=0 ;
                   }
           if(R==H) {
              printf(" gagné \n");
              Rs=1;
              nb=10;
                    }
           }
       nb++;
     } while(nb<10 );
       if(Rs==1)
          printf("felicitation\n");
       else
          printf("perdu vous gagnerez la prochaine peut etre\n");

    return 0;
}
