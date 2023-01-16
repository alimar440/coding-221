#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,u,v,p,i;


    do{
    printf("donner n:");
    scanf("%d",&n); }while(n<=0);

    p = 1 ; v = 0; u = 1 ;

    for(i=0;i<=n;i++)
    {
        if(i<=1)
            u=i;
        else{
        u = p + v ;
        v = p ;
        p = u ;
        }
        printf("u%d = %d\n ",i,u);

    }

    return 0;
}
