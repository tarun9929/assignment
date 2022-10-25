#include<stdio.h>

int main(){
    int a , b;

    printf("Enter a number\n");
    scanf("%d" , &a);
    printf("Enter a number\n");
    scanf("%d" , &b);

    int i = 2;

    while(i < a){
        if(a % i == 0 && b % i == 0){
            break;
        }
        i++;
    }
    if(i == a){
        printf("it's a Co Prime Number\n");
    }
    else{
        printf("it's not a Co Prime Number\n");
    }

    return 0;
}