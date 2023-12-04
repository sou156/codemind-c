#include<stdio.h>
#include<math.h>
int main(){
    int a,b,square,cube;
    scanf("%d%d",&a,&b);
    for(int i=a;i<b;i++){
        if(a!=i){
        square=pow(i,2);
        cube=pow(i,3);
        printf("%d %d %d
",i,square,cube);
    }
    }
}