#include <stdio.h>
#include <stdlib.h>

int long  exo4(int long q) {
 int long w = q , e = 1, r , t ,l=0 ,lo=0 ,h ,  k=0;
   while(w!= 0){
        w=w/10 ;
        e = e*10;
        l=l+1;
   }
    e= e/10 ;
    r = q / e ;
    t = q % e ;
    h=t ;
    while(h!=0){
        lo=lo + 1 ;
        h=h/10;
               }
    printf("%d   ",r) ;
    while(l-lo>1){
        printf("%d   ",k);
        lo=lo+1;
    }
    return t ;
}

int main()
{     int n  , m,l,j,i ;
   do{
       printf("donner un nombre\n");
       scanf("%dl",&n) ;}
   while(n<0);
    printf("\n\le resultat est \n");
    j=n;
   while(j!=0){
        l=l+1;
        j=j/10;
    }
     m=n;
    for(i=0;i<l;i++){
       m =  exo4(m) ;
     }
    return 0;
}
