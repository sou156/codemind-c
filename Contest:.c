#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int b=(y*1)+(z*2);
    if(b>=x){
        printf("Qualify");
    }
    else {
        printf("Not Qualify");
    }
}