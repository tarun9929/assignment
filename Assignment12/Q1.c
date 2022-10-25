#include<stdio.h>

void PrintNumbers(int n){
    if(n != 0){
        PrintNumbers(n-1);
        printf("%d " , n);
    }
}

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d", &n);

    PrintNumbers(n);

    return 0;
}