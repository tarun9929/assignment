#include<stdio.h>

int main(){
    int i = 1;
    int n;

    int a = 0;
    int b = 1;

    printf("Enter a number\n");
    scanf("%d" , &n);

    while(i <= n){
        printf("%d " , a);
        int sum = a + b;
        a = b;
        b = sum;
        i++;
    }

    return 0;
}