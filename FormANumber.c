#include <stdio.h>
int formnumber(int n){
    int digit;
    int number=0;
    for(int i=0;i<n;i++){
        scanf("%d",&digit);
        number=(number*10) +digit;
    }
    return number;
}
int main(){
    int n;
    scanf("%d",&n);
    int result=formnumber(n);
    printf("%d",result);
    return 0;
}