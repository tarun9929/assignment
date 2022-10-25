#include<stdio.h>

int main(){
    int i = 1;
    int n;
    int sum = 0;

    printf("Enter the value of n\n");
    scanf("%d" , &n);

    while(i <= n){
        sum += (i*i);
        i++;
    }

    printf("%d" , sum);

    return 0;
}