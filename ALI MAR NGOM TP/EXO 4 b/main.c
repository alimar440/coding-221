#include <stdio.h>
#include <stdlib.h>

int main()
{ int a,h,m,s;
    do{
        printf("entrer l'heure ");
        scanf("%d",&h);}
        while (h<=0 || h>23);
        do{
        printf("entrer la minute ");
        scanf("%d",&m);}
        while (m<=0 || m>=59);
        do{
        printf("entrer la seconde ");
        scanf("%d",&s);}
        while (s<=0 , s>=59);
        a=h*3600+m*60+s;
        printf("l'heure en seconde est %d",a);

    return 0;
}
