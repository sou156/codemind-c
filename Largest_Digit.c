#include<stdio.h>
int main(){
    int n,large=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int k=n%10;
        if(large<k){
            large=k;
        }
         n=n/10;
    }
     printf("%d",large);
}