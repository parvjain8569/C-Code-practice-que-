#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


long fact(int n) {
    long factorial=1;
    for (int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}

int main()
{
   int n;
   scanf("%d",&n);
   printf("%ld", fact(n));
}