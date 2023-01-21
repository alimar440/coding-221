#include <stdio.h>
#include <stdlib.h>

void tri_a_bulle(int n , int t[]){
  int dernier = n-2 ;
  int temp ;
  while (dernier>0){
    for(int i=0;i<=n-1;i++)
       if (t[i]>t[i+1]){
             temp = t[i+1];
            t[i+1] = t[i] ;
            t[i] = temp ;  }
    dernier--; }
  }
int main()
{
    int tab[10] = { 4, -1, 8, 12, -6, 23, 2, 28, 24, 33};
     int n =10;

     tri_a_bulle(n,tab );

     printf("\n************ le tableau trie par le tri a bulle ****************\n\n\n");
    for(int i = 0 ; i<10 ; i++)
        printf("%d  ",tab[i]) ;
    printf("\n\n\n");

    return 0;
}
