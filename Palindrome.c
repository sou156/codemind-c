#include<stdio.h>
int main(){
    int a,rev=0,k,b;
    scanf("%d",&a);
    b=a;
    while(a!=0){
        k=a%10;
        rev=(rev*10)+k;
        a=a/10;
    }
    if(rev==b){
        printf("True");
    }
    else{
        printf("False");
    }
}