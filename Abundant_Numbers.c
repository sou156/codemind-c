#include<stdio.h>
int main(){
    int a,k,fact=0;
    scanf("%d",&a);
    for(int i=1;i<a;i++){
        if(a%i==0){
            k=i;
            fact=fact+k;
        }
    }
     if(fact>a){
         printf("True");
     }
     else{
         printf("False");
     }
}