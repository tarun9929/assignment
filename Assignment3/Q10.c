#include<stdio.h>

int main(){
    int cost;
    int sell;

    printf("Enter the selling Proce\n");
    scanf("%d" , &sell);
    printf("Enter Cost Price\n");
    scanf("%d" , &cost);

    int Profit = sell - cost;
    int Loss = cost - sell;

    if(Profit < 0){
        printf("Profit : %d\n" , 0);
    }
    else{
        printf("Profit : %d\n" , Profit);
    }

    if(Loss < 0){
        printf("Loss : %d\n" , 0);
    }
    else{
        printf("Loss : %d\n" , Loss);
    }

    return 0;
}