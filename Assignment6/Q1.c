#include<stdio.h>

int main(){
    int sum = 0;
    int i = 1;
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    while(i <= n){
        sum += i;
        i++;
    }
    // 1 2 3 4 5
    // 1 2 3 4 5 6 7 8 9 10 = 36 + 9 + 10 = 46 + 9 = 55

    printf("The sum is %d" , sum);

    return 0;
}