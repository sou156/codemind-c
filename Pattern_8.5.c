#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(i==j || i+j==a+1){
                printf("%c",64+i);
            }
            else{
                printf(" ");
            }
            
        }
        printf("
");
    }
}