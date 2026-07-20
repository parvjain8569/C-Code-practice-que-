#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a,remainder;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        int original=a;
        int number=0;
        while(a>0){
            remainder=a%10;
            number=(number*10)+remainder;
            a=a/10;
        }  
        if(original==number){
            printf("Equal\n");
        }
        else{
            printf("Not Equal\n");
        }
    }
    return 0;
}