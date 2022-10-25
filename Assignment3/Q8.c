#include<stdio.h>

int main(){
    int Y;

    printf("Enter a Year\n");
    scanf("%d" , &Y);

    if(Y % 4 == 0){
        printf("Leap Year\n");
    }
    else{
        printf("Not a Leap Year\n");
    }


    return 0;
}