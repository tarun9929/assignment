#include<stdio.h>

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    int i = 1;

    int a = 0;
    int b = 1;

    while(i < n){
        int sum = a + b;
        a = b;
        b = sum;
        i++;
    }

    printf("The Nth turm of fibonnaci series is %d" , a);
    return 0;
}