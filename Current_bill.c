#include<stdio.h>
int main(){
    int u;
    scanf("%d",&u);
    if(u<=199){
         float rs=u*(1.20);
        if(rs>400){
            float rs2=((rs/100)*15)+rs;
            printf("%.2f",rs2);
        }
        else{
            printf("%.2f",rs+100);
        }
    }
     else if(200<=u && u<400){
         float rs=u*(1.50);
        if(rs>400){
            float rs2=((rs/100)*15)+rs;
            printf("%.2f",rs2);
            
        }
        else{
            printf("%.2f",rs+100);
        }
    }
  
    
    else if(400<=u && u<600){
        int rs= u*(1.80);
        if(rs>400){
            float rs2=((rs/100)*15)+rs;
            printf("%.2f",rs2);
        }
    }
    else if(u>=600){
        int rs=u*(2.00);
        if(rs>400){
            float rs2=((rs/100)*15)+rs;
            printf("%.2f",rs2);
        }
    }
    
}