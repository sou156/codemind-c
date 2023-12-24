#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int sum_eve=0,sum_odd=0;
    for(int i=0;i<a;i++){
        if(i%2==0){
            sum_eve=sum_eve+arr[i];
        }
        else{
            sum_odd=sum_odd+arr[i];
        }
    }
    if(sum_eve>sum_odd){
        printf("%d",sum_eve-sum_odd);
    }
    else{
        printf("%d",sum_odd-sum_eve);
    }
}