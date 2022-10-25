#include<stdio.h>

int Power(int n , int p){
    if(p == 0){
        return 1;
    }

    int s = n * Power(n , p-1);

    return s;
}

int main(){
    int n , p;

    printf("Enter a number\n");
    scanf("%d" , &n); 
    printf("Enter a number\n");
    scanf("%d" , &p);

    int s = Power(n , p);

    printf("Power of %d is %d" , n , s);

    return 0;
}