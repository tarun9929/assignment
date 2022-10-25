#include<stdio.h>

void rev(int n){
    if(n != 0){
        printf("%d" , n % 10);
        rev(n/10);
    }
}

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    rev(n);

    return 0;
}