#include <stdio.h>
#include <stdlib.h>

int main()
{  int b;
   double a,c;
   printf("donner la valeur de a : ");
   scanf("%lf",&a);
   c=a;
   b=a*100;
   a=b;
   a=a/100;
   printf("la tronquature est %lf ",a);
    return 0;
}
