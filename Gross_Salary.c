#include<stdio.h>
int main(){
    int bs,da,hra;
    float gs;
    scanf("%d",&bs);
    if(bs<=10000){
        da=(bs/100)*80;
        hra=(bs/100)*20;
        gs=bs+da+hra;
        printf("%.2f",gs);
    }
      else if(bs<=20000){
        da=(bs/100)*90;
        hra=(bs/100)*25;
       float gs=bs+da+hra;
        printf("%.2f",gs);
    }
    else if(bs>20000){
        da=(bs/100)*95;
        hra=(bs/100)*30;
         float gs=bs+da+hra;
        printf("%.2f",gs);
    }
}