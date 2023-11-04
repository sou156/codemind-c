#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(3>x){
        printf("LIGHT");
    }
    else if(3<=x && x<7){
        printf("MODERATE");
    }
    else if(x>=7){
        printf("HEAVY");
    }
}