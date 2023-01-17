#include <stdio.h>
#include <stdlib.h>

int Ackermann(int M,int N) {
      if(M == 0)
        return N+1;
      else {
        if(N == 0)
        return Ackermann(M-1,1);
              else
              return Ackermann(M-1,(Ackermann(M,N-1)));
      }
    }

int main()
{
    int q,w;
    for(q=1;q<=3;q++)
        for(w=1;w<=5;w++) {
            printf("Ackermann(%d,%d)=%d\n",q,w,Ackermann(q,w));

    }
    return 0;
}
