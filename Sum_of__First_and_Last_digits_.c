#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int firstnumber=x%10;
    
    while(x>=10)
    {
        x=x/10;
    }
    int lastnumber=x;
    int sum=firstnumber+lastnumber;
    printf("%d",sum);
}