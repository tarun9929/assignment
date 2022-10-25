#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    int i = 0;

    printf("Enter a number\n");
    scanf("%d" , &n);

    while(i < n*2){
        sum += i+2;
        i = i + 2;
    }

    // 2 4 6 8 10 12 14 16 18 20 = 
    printf("%d" , sum);

    return 0;
}