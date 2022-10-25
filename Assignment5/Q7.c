#include<stdio.h>

int main(){
    int n;

    int i = 0;

    printf("Enter a number\n");
    scanf("%d" , &n);

    while(i < n){
        printf("%d " , n * 2 - i * 2);
        i++;
    }

    return 0;
}