#include<stdio.h>

int main(){
    int n , i = 1;

    printf("Enter a number\n");
    scanf("%d" , &n);

    while(i <= n){
        printf("%d " , (n * 2) + 1  - (i * 2));
        i++;
    }
    
    return 0;
}