#include<stdio.h>
int main(){
    int a,b,fact=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
      fact=fact*i;
      
    }
    printf("%d",fact);
}