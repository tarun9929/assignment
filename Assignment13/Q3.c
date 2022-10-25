#include<stdio.h>

int OddSum(int n){
    if(n == 1){
        return n;
    }

    int s = n * 2 - 1 + OddSum(n-1);

    return s; 
}

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    int s = OddSum(n);

    printf("The sum of %d Odd Numbers is %d" , n , s);

    return 0;
}
