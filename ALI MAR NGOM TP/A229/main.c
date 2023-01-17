#include <stdio.h>
#include <stdlib.h>

void hanoi(int n , char A , char B , char C){
     if (n==1)
        printf("deplacer le disque %d de la tige %c vers la tige %c\n",n,A,C);
    else {
        hanoi(n-1,A,C,B);
         printf("deplacer le disque %d de la tige %c vers la tige %c\n",n,A,C);
         hanoi(n-1,B,A,C);
     }
}
int main()
{
    int q ;
    char A,B,C;
    printf("donner un nombre\n ");
    scanf("%d",&q);
    hanoi(q,'A','B','C');

    return 0;
}
