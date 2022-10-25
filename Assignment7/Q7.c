#include<stdio.h>

int main(){
    int a , b;

    printf("Enter a number\n");
    scanf("%d" , &a);
    printf("Enter a number\n"); 
    scanf("%d" , &b);

    while(a <= b){
        int n = a;

        int j = 2;

        while(j < n){
            if(n % j == 0){
                break;
            }
            j++;
        }

        if(j == n){
            printf("%d " , n);
        }


        a++;
    }

    return 0;
}