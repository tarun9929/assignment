#include<stdio.h>

int main(){
    int i = 2;

    int n;

    printf("Enter a Number\n");
    scanf("%d" , &n);

    while(i <= n*2){
        printf("%d " , i);
        i = i + 2;
    }
}