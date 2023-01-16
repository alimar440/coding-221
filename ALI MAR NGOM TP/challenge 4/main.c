#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , T[1000] , a , b , n,max,s , p ;

     printf("Donner la taille du tableau:\n");
     scanf("%d",&n);

    for(i=0;i<n;i++) {
        printf("Donner %d eme valeur du tableau\n",i+1);
        scanf("%d",&T[i]); }    i  =  0 ; a = 0 ; b=0 ;  max = b ; s = 0; int j ;

        while(i<n) {
            if (T[i] != 0 ){
            for(j=a; j<=i-1;j++){
                if ( T[j]>b )
                max=T[j]; b= j ; }

                if (T[i]< max)
                    p = T[i]*(i-b);
                    else
                        p = max *(i-b) ;
                    s = s + p ;  b = 0 ; max = 1 ;
                      for(j=i+1; j<=n;j++) {
                if ( T[j]>b )
                max=T[j]; b= j ; }

                if (T[i]< max)
                    p = T[i]*(i-b);
                    else
                        p = max *(i-b) ;
                        s=s + p ;}  ; }


        printf(" %d ",s);


    return 0;
}
