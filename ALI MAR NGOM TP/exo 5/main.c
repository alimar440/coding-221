#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,y,z,t ;
    printf("enter un entier \n");
    scanf("%d",&x);
    printf("enter un entier \n");
    scanf("%d",&y);
    printf("enter un entier \n");
    scanf("%d" ,&z);
    if(x>y){
        t=x;
        x=y;
        y=t;}
    if(x>z){
        t=x;
        x=z;
        z=t;}
    if(y>z){
        t=y;
        y=z;
        z=t;}
    printf("l'ordre des trois valeurs est\n %d < %d <%d \n ",x,y,z);

    return 45;
}
