#include<stdio.h>

int DigitSum(int n){
    if(n == 0){
        return n;
    }

    int s = n % 10 + DigitSum(n/10);

    return s;
}

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    int s = DigitSum(n);

    printf("The Digit Sum of %d is %d" , n , s);

    return 0;
}