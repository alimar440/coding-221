#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,h,m,s;
    do{
        printf("entrer une valeur ");
        scanf("%d",&a);}
    while (a<=0 );
    h=a/3600;
    a=a%3600;
    m=a/60;
    s=a%60;
    printf("le temps est : %dh %dm %ds ",h,m,s);
    return 0;
}
