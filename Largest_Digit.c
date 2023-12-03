#include<stdio.h>
int main(){
    int a,list,large=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        list=a%10;
        if(list>large){
            large=list;
        }
        a=a/10;
    }
    printf("%d",large);
}