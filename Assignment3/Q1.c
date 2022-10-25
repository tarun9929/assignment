#include<stdio.h>

int main(){
    int n;

    printf("Enter a Number\n");
    scanf("%d" , &n);

    if(n > 0){
        printf("Positive\n");
    }
    else{
        printf("Non Positive\n");
    }

    return 0;
}