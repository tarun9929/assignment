#include<stdio.h>

void PrintReverseNumbers(int n){
    if(n != 0){
        printf("%d " , n);
        PrintReverseNumbers(n-1);
    }
}

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d", &n);

    PrintReverseNumbers(n);

    return 0;
}