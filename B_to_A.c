#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(b>=a){
        for(int i=b;a<=b;b--){
            printf("%d ",b);
        }
    }
}