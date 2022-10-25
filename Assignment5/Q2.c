#include<stdio.h>

int main(){
    int i = 0;
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    while(i < n){
        printf("%d " , i+1);
        i++;
    }

    return 0;
}