#include <stdio.h>
#include <stdlib.h>

int main()
{ float b,h,a ;
      do {
     printf("donner la base : ");
     scanf("%f",&b);}
     while(b<0);

     do {
     printf("donner la hauteur : ");
     scanf("%f",&h);}
     while(h<0);
     a=(b*h)/2;
     printf("l'Aire du triangle est : %f",a);

    return 0 ;
}
