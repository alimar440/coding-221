#include <stdio.h>
#include <stdlib.h>


int som1(int q)
{
   float w ;
    w=(q*(q+1))/2  ;
   return w ;

}
int som2(int q)
{  int i ,y =0;
   for(i=1;i<=q;i++)
    y=y+i;
   return y ;

}

int main()
{
   int a ;
    scanf("%d",&a);
   int b = som1(a),f=som2(a);
    printf("methode 1 \n %d  \nmethode 2 \n %d",b,f);

    return 0;
}
