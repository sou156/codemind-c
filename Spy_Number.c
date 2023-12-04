#include<stdio.h>
int main(){
    int a,l,sum=0,product=1;
    scanf("%d",&a);
    while(a!=0){
        l=a%10;
        sum=sum+l;
        product=product*l;
        a=a/10;
    }
    if(sum==product){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}