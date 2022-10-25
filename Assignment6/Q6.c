#include<stdio.h>

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    int i = 2;
    int fact = 1;

    while(i <= n){
        fact = fact * i;
        i++;
    }

    printf("%d" , fact);

    return 0;
}