#include <stdio.h>
#include <stdlib.h>

int nbp(int nb ){
    int i, ver = 0 ;

    for(i=1;i<=nb;i++){
        if(nb%i==0)
            ver = ver+ 1;
    }
    if(ver==2)
        ver=1;
    else
        ver=0;
    return ver;
    }

int main()
{
    printf("les nombres premier contenue entre 1 et 1000 sont\n");
    for(int i=1;i<=1000;i++)
      if(nbp(i)==1)
        printf("%d   ",i);
    return 0;
}
