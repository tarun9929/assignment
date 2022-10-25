#include<stdio.h>

int main(){
    int n;

    printf("Enter a number\n"); 
    scanf("%d" , &n);

    if(n % 7 == 0 && n % 3 == 0){
        printf("Divisable by 7 and 3");
    }
    else{
        printf("not divisable\n");
    }

    return 0;
}