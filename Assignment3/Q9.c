#include<stdio.h>

int main(){
    int a , b , c;

    printf("Enter three numbers\n");
    scanf("%d %d %d" , &a , &b , &c);

    int max = a;

    if(b >= max){
        max = b;
    }

    if(c >= max){
        max = c;
    }

    printf("The Greatest amungs three is %d\n" , max);

    return 0;
}