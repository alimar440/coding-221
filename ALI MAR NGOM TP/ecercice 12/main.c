#include <stdio.h>
#include <stdlib.h>

int main()
{  int n ,q ,w ,e ,t ,i;
      printf("donner n:");
      scanf("%d",&n);

      for(i=0;i<=n;i++){
        for(q=1;q<=i;q++)
            printf("*");
        for(w=0;w<n-i;w++)
            printf(" ");
      printf("\n");
      }

      for(i=0;i<=n;i++){
        for(q=0;q<i;q++)
            printf(" ");
        for(w=1;w<=n-i;w++)
            printf("0");
      printf("\n");
      }

    return 0;
}
