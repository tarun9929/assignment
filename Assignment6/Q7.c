#include<stdio.h>

int main(){
    int c = 0;
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    while(n){
        c++;
        n = n / 10;
    }

    printf("The Sum is %d\n" , c);

    return 0;
}