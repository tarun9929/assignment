#include<stdio.h>

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    if(n % 2 == 0 && n % 3 == 0){
        printf("Divisable by 2 and 3");
    }
    else{
        printf("not divisable\n");
    }
}