#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i;
    float pii, n, s;

     do{
        printf("donner n: ");
        scanf("%f", &n);
        }while(n<=0);

    s = 0.0 ;

    for(i=n; i>=1; i--){
        s = s + (double)1/pow(i,2);
    }

    pii = sqrt(s*6) ;

    printf("la valeure de pi est %f", pii);

    return 0;
}
