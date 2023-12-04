#include<stdio.h>
int main(){
    int a,b,k,t,sum=0;
    scanf("%d",&a);
    t=a*a;
    b=t;
    while(b!=0){
        k=b%10;
        sum =sum+k;
        b=b/10;
    }
    if(sum==a){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}