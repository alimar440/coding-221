#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s , i ;
        s = 0 ;
        for (i=0;i<=10;i++)
            s=s*s+i ;
    printf("%d",s);
    return 0;
}
