#include<stdio.h>

int main(){
    int ct = 0;
    int n;

    printf("Enter a number\n");
    scanf("%d" , &n);

    int i = 1;

    while (i < n)
    {
        if(n % i == 0){
            ct++;
        }
        i++;
    }
    
    if(ct >= 2){
        printf("%d\n" , ct);
        printf("Not Prime\n");
    }
    else{
        printf("Prime\n");
    }

    return 0;
}