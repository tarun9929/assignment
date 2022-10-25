#include<stdio.h>

int main(){
    int n;
    int i = 1;

    printf("Enter a number\n");
    scanf("%d" , &n);

    while(i < n*2){
        printf("%d " , i);
        i+=2;
    }

    return 0;
}