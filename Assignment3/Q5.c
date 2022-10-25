#include<stdio.h>

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    if(n > 99 && n < 999 || n < -99 && n > -999){
        printf("Three Digit Number\n");
    }
    else{
        printf("Not a Three Digit Number\n");
    }
}