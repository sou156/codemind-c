#include<stdio.h>
int main(){
    int a,rev=0,k;
    scanf("%d",&a);
     k=a;
    while(a!=0){
        int k= a%10;
         rev=(rev*10)+k;
        a=a/10;
       
    }
     if(rev==k){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
}