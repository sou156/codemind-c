#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int c=0,avg;
    int sum=0;
    for(int i=0;i<a;i++){
        sum=sum+arr[i];
    }
     avg=sum/a;
    for(int i=0;i<a;i++){
        if(avg>=arr[i]){
            c++;
        }
    }
    printf("%d",c);
}