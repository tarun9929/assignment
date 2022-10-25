#include<stdio.h>

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    int i = 2;

    int a = n + 1;

    while(i < a){
        if(a % i == 0){
            a++;
            i = 2;
        }
        i++;
    }

    printf("%d" , a);

    return 0;
}