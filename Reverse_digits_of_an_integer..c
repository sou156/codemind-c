#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    while(a>0){
        int d=a%10;
        printf("%d",d);
         a=a/10;
    }
}