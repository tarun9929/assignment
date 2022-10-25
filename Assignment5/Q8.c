#include<stdio.h>

int main(){
    int i = 1;

    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    while(i <= n){
        printf("%d " , i * i);
        i++;
    }

    return 0;
}