#include <stdio.h>

int main(){
    int i,sum=0,n;
    printf("Enter your n\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum+=i;
    }
    printf("your sum is %d\n", sum);
    return 0;
}