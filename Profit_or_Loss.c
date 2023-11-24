#include<stdio.h>
int main(){
    int cost,sep;
    scanf("%d%d",&cost,&sep);
    if(cost>sep){
        printf("Loss");
    }
    else if(cost<sep){
        printf("Profit");
    }
    else {
        printf("No Profit and No Loss");
    }
}