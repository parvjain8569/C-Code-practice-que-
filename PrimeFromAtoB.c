#include <stdio.h>
void printPrimes(int a, int b)
{
    int found = 0;
    for (int j = a; j <= b; j++) {
        if (j < 2) {
            continue;
        }
        int isPrime = 1;
        for (int i = 2; i * i <= j; i++) {
            if (j % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", j);
            found = 1;
        }
    }
    if (found == 0) {
        printf("-1");
    }
}
int main()
{
  int a,b;
  scanf("%d%d", &a,&b);
  printPrimes(a, b);
  return 0;
}