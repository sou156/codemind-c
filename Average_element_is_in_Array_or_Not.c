#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0,avg,flag=0;
    for(int i=0;i<a;i++){
        sum=sum+arr[i];
    }
    avg=sum/a;
    for(int i=0;i<a;i++){
        if(avg==arr[i]){
            flag=6;
            break;
        }
    }
     if(flag==6){
            printf("True");
        
        } else{
            printf("False");
        
        }
    
    
}