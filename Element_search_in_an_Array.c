#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int x,c=0;
    scanf("%d",&x);
    for(int i=0;i<a;i++){
        if(arr[i]==x){
            c++;
        }
       
        }
        if(c!=0){
            printf("True");
        }
        else{
            printf("False");
        }
    }
