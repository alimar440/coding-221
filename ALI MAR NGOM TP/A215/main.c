#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

bool parfait(int a ){
    int s=0 ,i ;
    bool b ;
    for(i=1;i<a;i++){
         if (a%i==0)
            s=s+i;
         if (s==a)
            b=1;
         else
            b=0;
    }
        return b ;}
int main()
{
    int x ,i ;
    printf("les nombres parfait contenue entre 1 et 10000 sont\n");
    for(i=2;i<=10000;i++){
            x=parfait(i);
            if (x==1)
                printf("%d   \n",i);
    }

    return 0;
}
