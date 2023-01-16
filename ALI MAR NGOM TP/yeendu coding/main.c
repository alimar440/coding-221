#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,x,d,p,r
    printf("donner un nombre:/n");
    scanf("%d",&n);

    x = n ;  d = 0 ;  p = 1;

    while(x!=0){
        r = x % 10 ;
        d = d * p + r ;
        p = p * 10 ;
        x = x / 10 ;
    }
    if ( d  == n)
        printf ("palindrome");
    else
        printf("pas palindrome");
    return 0;
}
