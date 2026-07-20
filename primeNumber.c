#include <stdio.h>

int main()
{
    int n;
    int count=0;
    scanf("%d",&n);
    if(n<2){
        return 0;
    }
    for(int i=2;i<=n;i++){
        int isprime=1;
        for(int j=2;j*j<=i;j++){
            if (i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            printf("%d\n",i);
        }
    }
    return 0;
}