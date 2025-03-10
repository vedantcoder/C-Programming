#include<stdio.h>
#include<math.h>

int main(){
    int holiday;
    float temp;
    int sales;
    scanf("%f", &temp);
    scanf("%d", &holiday);
    if(temp<=20){
        float coldness_str;
        if(temp<=15){
            coldness_str = 0.1;
        }
        else{
            coldness_str = (20-temp)/5;
        }
        sales = 75*coldness_str;
    }
    else{
        float hotness_str;
        if(temp>=30){
            hotness_str=1;
        }
        else{
            hotness_str = (temp-20)/20;
        }
        if(holiday==0){
            sales = 125*hotness_str;
        }
        else{
            sales = 150*hotness_str;
        }
    }
    printf("Sales  = %d", sales);
}