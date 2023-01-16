#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int som1(int q){
   if(q==1)
      return 1 ;
      else{
          int c = som1(q-1) + pow(q,5);
            printf("%d + ",c);
        return c ;
      }
}

int som2(int z){
    int S = 0 ;
    for(int i = 1 ; i <= z ; i++)
        S += pow(i,5) ;
    return S ;

}
int main()
{
    int i,d, n ;
    printf("donnez un nombre \n") ;
    scanf("%d",&n) ;
    int som01 = som1(n) ;
    printf("= %d\n",som01);
    int som02 = som2(n) ;
    printf("1");
    for(i=2;i<n;i++){
        d = pow(i,5);
        printf("  +  %d ",d);
    }
    printf("= %d\n",som02);
    return 0;
}
