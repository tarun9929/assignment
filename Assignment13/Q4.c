#include<stdio.h>

int SqrSum(int n){
    if(n == 1){
        return n;
    }

    int s = n * n * n + SqrSum(n-1);

    return s;
}

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    int s = SqrSum(n);

    printf("The Sum is %d" , s);

    return 0;
}