#include<stdio.h>

int CountDigits(int n){
    if(n){
        int s = 1 + CountDigits(n / 10);
        return s;
    }
}

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    int Digits = CountDigits(n);

    printf("The Number of Digits in %d is %d" , n , Digits);

    return 0;
}