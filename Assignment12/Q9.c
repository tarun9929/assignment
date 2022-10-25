#include<stdio.h>

void oct(int n){
    if(n != 0){
        oct(n / 8);
        printf("%d" , n % 8);
    }
}

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    oct(n);

    return 0;
}