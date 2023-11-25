#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    for(int i=a;a<=b;a++){
        int v=n*a;
        printf("%d x %d = %d
",n,a,v);
    }
    
}