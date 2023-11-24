#include<stdio.h>
int main(){
    int x,c=0;
    scanf("%d",&x);
    while(x>=1){
        x=x/10;
        c++;
    }
    printf("%d",c);
}