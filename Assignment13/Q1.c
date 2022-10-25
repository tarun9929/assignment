#include<stdio.h>

int sum(int n){
    if(n == 0){
        return 0;
    }
    int s = n + sum(n-1);
    return s;
}

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d", &n);

    int s = sum(n);

    printf("The sum of %d numbers is : %d" , n , s);

    return 0;
}