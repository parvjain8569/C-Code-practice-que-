#include <stdio.h>
/* Include other headers as needed */
int main()
{
    int arr[10];
    int sum=0;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}