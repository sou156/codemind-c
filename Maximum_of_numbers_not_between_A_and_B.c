#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);
    int large=arr[0];
    int flag=0;
    for(int i=0;i<a;i++){
            if(arr[i]<x || arr[i]>y){
                
                 if(arr[i]>large){
                     large=arr[i];
                      flag++;
                 }
            }
    }
    if(flag>=1){
        printf("%d",large);
    }
    else{
        printf("-1");
    }
    

}
