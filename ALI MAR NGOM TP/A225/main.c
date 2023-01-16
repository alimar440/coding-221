#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int n)
{
    if (n == 0 || n == 1)
        return 1;
   return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
    int n;
    printf("donner un nombre\n");
    scanf("%d",&n);
    printf("fibonacci (%d) = fibonacci (%d) + fibonacci (%d) \n", n,n-1,n-2);
    printf("fibonacci (%d) = %d + %d = %d \n", n, Fibonacci(n-1),Fibonacci(n-2),Fibonacci(n));


    return 0;
}
