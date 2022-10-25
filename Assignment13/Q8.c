#include<stdio.h>

void fib(int a , int b , int n){
    if(n){
        printf("%d " , a);
        fib(b , a+b , n-1);
    }
}

int main(){
    int a = 0;
    int b = 1;
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    fib(a , b , n);

    return 0;
}