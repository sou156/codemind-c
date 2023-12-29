#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(int i=0;i<a;i++){
        if(arr[i]%2==0){
            if(i%2==0){
                flag++;
            }
            else{
                printf("False");
                exit(0);
            }
        }
    }
    if(flag>=1){
        printf("True");
    }
}