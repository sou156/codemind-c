#include<stdio.h>
int main(){
    int x,sum=0;
    scanf("%d",&x);
    while(x>0){
        int r=x%10;
        x=x/10;
        sum=sum+r;
    }
    printf("%d",sum);
}