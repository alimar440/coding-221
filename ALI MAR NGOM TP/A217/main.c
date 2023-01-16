#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void transfo_en_maj ( char minus[] , char maj[]){

    for(int i=0;i<=strlen(minus);i++){
        maj[i]=toupper(minus[i]);
    }
   }
int main()
{   char minusc[20],majus[20];
    printf("veiller ecrire un mot en minuscule\n ");
    gets(minusc);
    transfo_en_maj (minusc,majus);
    printf("le mot en majuscule est %s \n",majus);
    return 0;
}
