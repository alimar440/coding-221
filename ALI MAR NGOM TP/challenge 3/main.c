#include <stdio.h>
#include <stdlib.h>

int main()
{

    int T[100000] , i , n , a , j , b , vrai , faux;

    printf("entrer le nombre d'etudiant present ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
        T[i]=0;

    for(i=0;i<n;i++){
        printf("code de l'etudiant?\n");
        scanf("%d",&T[i]);

        { b = faux ;
            for(j=0;j<i;j++){
                if ( T[j] == T[i] )
                    b = vrai ;}
            if(b==vrai)
                 printf("cet etudiant est deja entre\n");
            else
                printf("cet etudiant peut entrer\n");

        }
    }


    return 0;
}
