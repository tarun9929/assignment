#include<stdio.h>

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    if(n % 5){
        printf("Not Divisable\n");
    }
    else{
        printf("Divisable\n");
    }

    return 0;
}