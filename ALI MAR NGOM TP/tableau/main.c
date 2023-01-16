#include <stdio.h>
#include <stdlib.h>

# define M 3
# define N 4
int tab[M][N] = {{1 , 2, 3}, {4, 5, 6}};
main (){
int i, j;
for (i = 0 ; i < M; i ++){
for (j = 0; j < N; j++)
printf (" tab [%d][% d]=% d\n",i,j,tab [i][j]);
}
}
