#include <stdio.h>
int main() {
    int n, a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        int temp = a;
        int adder = 0;
        int place = 1;
        
        while (temp > 0) {
            adder = adder + place;
            place = place * 10;
            temp = temp / 10;
        }
        
        int result = a + adder;
        printf("%d\n", result);
    }
    return 0;
}