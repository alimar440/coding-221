#include <stdio.h>
#include <stdlib.h>

 int x,y,t;

void aff_xy()
{
    printf("%d %d \n",x,y);
}
void ech_xy()
{
    t=x;x=y;y=t;
    aff_xy();
}

int main()
{
    x=4;y=3;
    aff_xy();
    ech_xy();
    ech_xy();
    return 0;
}
