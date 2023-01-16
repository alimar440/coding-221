#include <stdio.h>
#include <stdlib.h>

int puissance(int x, int n)
{
    if (n == 0)
        return 1;
    if (n==1)
        return x;
    return x * puissance(x, n - 1);
}
int main()
{
    int N , X ;
    printf( "donner deux nombres \n") ;
    scanf("%d %d",&X,&N) ;
    printf( "le resultat de %d^%d = %d\n", X, N, puissance(X, N));
    return 0;
}
