#include<stdio.h>

void bin(int n){
    if(n != 0){
        bin(n/2);
        printf("%d" , n % 2);
    }
}

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    bin(n);

    return 0;
}