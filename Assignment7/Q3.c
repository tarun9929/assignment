#include<stdio.h>

int main(){
    int i = 1;

    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    int a = 0;
    int b = 1;

    while(a < n){
        int sum = a + b;
        a = b;
        b = sum;
    }

    if(a == n){
        printf("The number is in series\n");
    }
    else{
        printf("The number is not in series\n");
    }

    return 0;
}