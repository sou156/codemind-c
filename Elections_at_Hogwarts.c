#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>50){
    if(x>y && x>z){
        printf("Gryffindor");
    }
    
    }
     else if(y>50){
        if(y>z && y>x){
            printf("Slytherin");
        }
    }
    else if(z>50){
        printf("Hufflepuff");
    }
    else{
        printf("NOTA");
    }
}