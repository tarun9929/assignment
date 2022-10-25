#include<stdio.h>

void Even(int n){
    if(n != 0){
        Even(n - 1);
        printf("%d " , n*2);
    }
}

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    Even(n);

    return 0;
}