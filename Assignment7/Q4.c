#include<stdio.h>

int main(){
    int a , b , H = 1;

    printf("Enter a number\n");
    scanf("%d" , &a);
    printf("Enter a number\n");
    scanf("%d" , &b);

    int i = 1;

    for(i = 1; i <= a; i++){
        if(a % i == 0 && b % i == 0){
            H = i;
        }
    }


    printf("The HCF of %d and %d is %d" , a , b , H);

    return 0;
}