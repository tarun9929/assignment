#include<stdio.h>

int fact(int n){
    if(n == 1){
        return 1;
    }
    int f = n * fact(n - 1);

    return f;
}

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    int f = fact(n);

    printf("The factorial of %d is %d" , n , f);

    return 0;
}