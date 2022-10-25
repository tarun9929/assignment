#include<stdio.h>

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    int arm = n;
    int digit = 0;

    while(n != 0){
        int c = n % 10;
        digit = digit + (c * c * c);
        n = n / 10;
    }

    if(arm == digit){
        printf("it's a Armstrong number\n");
    }
    else{
        printf("it's not a Armstrong number\n");
    }

    return 0;
}