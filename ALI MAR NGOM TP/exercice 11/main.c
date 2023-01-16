#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,i,l,k,p,h;
    printf("donnez une valeur:");
    scanf("%d", &n);
    printf("1\n");
    h = 2 ;
    for(i=2;i<=n;i++){
          printf("%d  ",h);

        k = n  ; p = i ; l = i-1 ;

        while(l!=0){
            k= k - 1;
        p = p + k ;
           printf("%d  ",p);
        l = l - 1 ;}
           printf("\n");
           h=h+1;

    }
    return 0;
}
