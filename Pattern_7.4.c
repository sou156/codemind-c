#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        for(int k=1;k<=a-i+1;k++){
            printf("%c ",65+a-i);
        }
        printf("
");
    }
}
