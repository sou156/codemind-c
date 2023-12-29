#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int i=0;i<a;i++){
        if(arr[i]%2==0){
            if(arr[i+1]%2!=0 && arr[i-1]%2!=0){
                   c++;
             }
        }
    }
    printf("%d",c);
}