#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int s1=0,s2=0;
    for(int i=0;i<a;i++){
        if(arr[i]%2==0){
            s1=s1+arr[i];
        }
        else{
            s2=s2+arr[i];
        }
    }
    if(s1>s2){
        printf("%d",s1-s2);
    }
    else{
        printf("%d",s2-s1);
    }
}