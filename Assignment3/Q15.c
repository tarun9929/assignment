#include<stdio.h>

int main(){
    int n;

    printf("Enter a number\n"); 
    scanf("%d" , &n);

    if(n < 0){
        printf("Nagative\n");
    }
    else if(n > 0){
        printf("Positive\n");
    }
    else{
        printf("Zero");
    }

    return 0;
}