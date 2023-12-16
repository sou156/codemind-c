#include<stdio.h>
int main(){
    float a,sum=0;
    scanf("%f",&a);
    for(float i=1;i<=a;i++){
        
            sum=sum+1/i;
        
    }
    printf("%.2f",sum);
}