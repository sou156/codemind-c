#include<stdio.h>
int main(){
    int a,rev,rev2=0;
    scanf("%d",&a);
    while(a!=0){
       rev=a%10;
       rev2=(rev2*10)+rev;
       a=a/10;
   }
   printf("%d ",rev2);
    
}