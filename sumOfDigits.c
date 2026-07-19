#include <stdio.h>
int main() 
{
    int test_cases;
    
    scanf("%d", &test_cases);
    
    while (test_cases > 0) {
        int number;
        int sum = 0;
        
        scanf("%d", &number);
        
        if (number < 0) {
            number = -number;
        }
        
        while (number > 0) {
            sum = sum + (number % 10);
            number = number / 10;
        }
        
        printf("%d\n", sum);
        
        test_cases--;
    }
    return 0;
}