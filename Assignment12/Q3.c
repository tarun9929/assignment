#include<stdio.h>

void Odd(int n){
    if(n != 0){
        Odd(n - 1);
        printf("%d " , n*2 -1);
    }
}

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    Odd(n);

    return 0;
}