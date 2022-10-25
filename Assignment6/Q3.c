#include<stdio.h>

int main(){
    int i = 1;
    int n;
    int sum = 0;

    printf("Enter a number\n");
    scanf("%d" , &n);

    while(i <= n * 2){
        sum += i;
        i = i+ 2;
    }


    printf("\n%d" , sum);

    return 0;
}